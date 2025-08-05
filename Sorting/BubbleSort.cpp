#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[6] = {5,4,3,2,1,0};
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " " ;
    }
    for(int i=0; i < n-1; i++){
        bool flag = true;
        for(int j=0; j< n-1-i ; j++){
            swap(arr[j],arr[j+1]) ;
            flag = false;
        }
        if(flag==true){
            break;
        }
    }
    cout << endl;
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " " ;
    }
}