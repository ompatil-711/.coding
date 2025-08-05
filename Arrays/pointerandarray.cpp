#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    cout << ptr;
    cout << arr;
    for(int i =0; i<=4;i++){
        cout << ptr[i]<< " ";
    }
    cout << endl;
    for(int i=0;i<=4;i++){
        cout << *ptr << " ";
        ptr++;
    }
    ptr=arr;// Good Practice
}