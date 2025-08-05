#include<iostream>
using namespace std;

int main(){
    int arr[8] = {0,1,2,4,5,6,7,8};
    int low = 0;
    int high = 7;
    int mid = low + (high-low)/2; 
    int ans = -1;
    while(low<=high){
        if(arr[mid] == mid ) low = mid +1;
        else 
            ans = mid;
            high = mid - 1;
    }
    cout << ans << endl;

}