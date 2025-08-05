#include<iostream>
using namespace std;

int main(){
    int a;
    cout<< "Please enter the number" << endl;
    cin>>a;
    if(a % 2 == 0){
        cout << "even"<< endl;
    }
    else{
        cout << "odd" << endl;
    }
}