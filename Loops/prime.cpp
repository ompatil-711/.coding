#include<iostream>
using namespace std;

int main(){
    int a;
    cout<< "Please enterr the the number : ";
    cin>> a;
    for(int i =2; i<=a-1; i++){
        if(a%1==0){
            cout << a << " is a composite number ";
            break;
                  
      }
    }
}