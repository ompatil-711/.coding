#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "enter the number" << endl;
    int a;
    cin >> a;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == a) {
            flag = true;
            break; 
        }
    }
    if(flag == true) {
        cout << "present" << endl;
    } else {
        cout << "not present" << endl;
    }
}

