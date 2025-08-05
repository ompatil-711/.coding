#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,4,5,6,2,1,3,5,4,7,8,9};
    int n= sizeof(arr);
    int s = sizeof(arr[5]);
    int u = sizeof(arr)/sizeof(arr[5]);
    cout << u << endl;
    cout << n<< endl;
    cout << s;
}