#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {5, 4, 3, 1, 2, 0};
    int n = 6;

    // Print the original array
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;

    // Selection sort
    for(int i = 0; i < n - 1; i++){
        int min = INT_MAX;
        int minidx = -1;

        for(int j = i; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                minidx = j;
            }
        }

        // Swap the minimum element found with the element at index i
        swap(arr[i], arr[minidx]);
    }

    // Print the sorted array
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
}
