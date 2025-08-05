#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int y;
    cin >> y;
    int* p1 = &x;
    int* p2 = &y;
    cout << "The Sum is " << *p1+*p2; 
}