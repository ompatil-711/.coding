#include<iostream>
using namespace std;

int main(){
    int x;
    int* ptr = &x;
    cout << ptr<< endl;
    cout << *ptr << endl;
    ptr = ptr + 1;
    cout << ptr<< endl;
    cout << *ptr <<endl;
}