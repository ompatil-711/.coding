#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a%5==0&&a%3==0){
        cout << "Divisible";
    }
    else{
        cout << "not divisible";
    }
}