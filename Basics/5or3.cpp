#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Please enter the nubmer"<< endl;
    cin >> a ;
    if(a%5==0|| a%3==0){
        cout << "The number is divisible "<< endl;
    } 
    else{
        cout << "not divisible";

    }

}

