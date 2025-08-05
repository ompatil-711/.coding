#include<iostream>
#include <climits>
using namespace std;

void MaxInArr(int arr[],int n,int idx){
    if(idx==n) return INT_MIN ;
    return max(arr[idx],MaxInArr)
}

int main(){
    int n=4;
    int arr[4] = {0,5,2,3};
    cout << MaxInArr(arr,n,0);
}