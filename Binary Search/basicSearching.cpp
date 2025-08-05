#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    bool found = false;


    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << target << endl;
            found = true;
            break;
        }
    }


    if (!found) {
        cout << "The target is not present in the given array" << endl;
    }

    return 0;
}
