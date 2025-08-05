// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     int max = arr[0];
//     for(int i=0;i<n-1;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         if (max < arr[i]) {
//             max = arr[i];
//         }
//     }
//     cout << max << endl;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max = arr[0];
    
    for(int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    cout << max << endl;
    return 0;
}
