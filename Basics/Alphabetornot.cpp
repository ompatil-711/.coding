#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the charecter" << endl;
    cin >> ch ; 
    if((int)ch >=65 && (int)ch <= 91 || (int)ch >=91 && (int)ch <=123){
        cout << "The input char is an alphabet" << endl;

    }
    else{
        cout << "the input char is not an alphabet"<<endl;
    }

}