#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Please Ente the number" << endl;
    cin>> n;
    int count=0;
    while(n>0){
        n=n/10;
        count ++;
    }
    cout<< "The number of the digit in the given number is : "<< count<< endl; 
}