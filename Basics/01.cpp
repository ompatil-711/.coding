#include <bits/stdc++.h>
using namespace std;

struct PathNode {
    int row, col;
    int pathCost;
    bool operator>(const PathNode &other) const {
        return pathCost > other.pathCost;
    }
};

int deltaRow[8] = {-1,-1,-1,0,0,1,1,1};
int deltaCol[8] = {-1,0,1,-1,1,-1,0,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numRows, numCols;
    cin >> numRows >> numCols;

    vector<vector<int>> valueGrid(numRows, vector<int>(numCols));
    vector<vector<int>> isImpassable(numRows, vector<int>(numCols, 0));

    for (int i = 0; i < numRows; ++i)
        for (int j = 0; j < numCols; ++j)
            cin >> valueGrid[i][j];

    int startRow, startCol, targetRow, targetCol;
    cin >> startRow >> startCol;
    cin >> targetRow >> targetCol;
    startRow--; startCol--;
    targetRow--; targetCol--;

    int blockedCount;
    cin >> blockedCount;
    for (int i = 0; i < blockedCount; ++i) {
        int r, c;
        cin >> r >> c;
        isImpassable[r - 1][c - 1] = 1;
    }

    isImpassable[startRow][startCol] = 0;
    isImpassable[targetRow][targetCol] = 0;

    const int INFINITE_COST = 1e9;
    vector<vector<int>> minCost(numRows, vector<int>(numCols, INFINITE_COST));
    priority_queue<PathNode, vector<PathNode>, greater<PathNode>> minHeap;

    minCost[startRow][startCol] = 0;
    minHeap.push({startRow, startCol, 0});

    auto isWithinBounds = [&](int r, int c) {
        return r >= 0 && r < numRows && c >= 0 && c < numCols && !isImpassable[r][c];
    };

    while (!minHeap.empty()) {
        auto current = minHeap.top();
        minHeap.pop();
        int r = current.row, c = current.col, cost = current.pathCost;

        if (cost != minCost[r][c]) continue;
        if (r == targetRow && c == targetCol) {
            cout << cost;
            return 0;
        }

        int maxNeighborVal = INT_MIN, countMaxVal = 0;
        for (int k = 0; k < 8; ++k) {
            int nr = r + deltaRow[k], nc = c + deltaCol[k];
            if (!isWithinBounds(nr, nc)) continue;
            if (valueGrid[nr][nc] > maxNeighborVal) {
                maxNeighborVal = valueGrid[nr][nc];
                countMaxVal = 1;
            } else if (valueGrid[nr][nc] == maxNeighborVal) {
                countMaxVal++;
            }
        }

        for (int dir = 0; dir < 8; ++dir) {
            int nextR = r + deltaRow[dir], nextC = c + deltaCol[dir];
            if (!isWithinBounds(nextR, nextC)) continue;

            int newPathCost;
            if (countMaxVal == 1 && valueGrid[nextR][nextC] == maxNeighborVal) {
                newPathCost = cost;
            } else {
                int maxOtherNeighbor = INT_MIN;
                for (int k = 0; k < 8; ++k) {
                    int orr = r + deltaRow[k], oc = c + deltaCol[k];
                    if (!isWithinBounds(orr, oc)) continue;
                    if (orr == nextR && oc == nextC) continue;
                    maxOtherNeighbor = max(maxOtherNeighbor, valueGrid[orr][oc]);
                }
                int requiredVal = max(maxOtherNeighbor, valueGrid[r][c]) + 1;
                int addedCost = max(0, requiredVal - valueGrid[nextR][nextC]);
                newPathCost = cost + addedCost;
            }

            if (newPathCost < minCost[nextR][nextC]) {
                minCost[nextR][nextC] = newPathCost;
                minHeap.push({nextR, nextC, newPathCost});
            }
        }
    }

    cout << -1;
    return 0;
}