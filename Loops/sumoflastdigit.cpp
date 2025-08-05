#include<iostream>
using namespace std;

int main(){
    int a;
    int lastdigit;
    int sum =0;
    cout << "Please enter the number : " << endl;
    cin>>a;
    while(a>0){
        lastdigit = a % 10;
        sum += lastdigit;
        a /=10 ;
    }
    cout << "The sum is :" << sum << endl;

}