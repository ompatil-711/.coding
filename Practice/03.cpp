// Queue (Reverse k Elemets ) --- (use one stack )

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> st;
    int n, k, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter queue elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }

    cout << "Enter k: ";
    cin >> k;

    for(int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    int t = q.size() - k;

    for(int i = 0; i < t; i++) {
        q.push(q.front());
        q.pop();
    }

    cout << "Queue after reversing first k elements: ";

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}