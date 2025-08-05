#include<iostream>
using namespace std;

int main(){
    int x=112;
    int* p= &x;
    cout << p << " " << *p <<endl; 
    *p = 6;
    cout << x;
}