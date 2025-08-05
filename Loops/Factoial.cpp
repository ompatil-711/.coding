#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int product =1;
    for(int i=1; i<= a;i++){
        product *= i;
    }
    cout<< product <<endl;
}