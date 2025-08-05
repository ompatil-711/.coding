#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    stack<int> st;
    int nge[n];

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements that are smaller than or equal to arr[i]
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If stack is empty, no greater element exists
        nge[i] = (st.empty()) ? -1 : st.top();

        // Push the current element to stack
        st.push(arr[i]);
    }

    // Print the Next Greater Elements
    cout << "Next Greater Elements: ";
    for (int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}
