#include<iostream>
using namespace std;

int msin(){
    int a,b;
    cin>> a >> b;
    int product = 1;
    for(int i=1;i<=b;i++){
        product *= b;
    }
    cout<< product<<endl;
}