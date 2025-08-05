#include<iostream>
using namespace std;
int fact(int n){
    //Base Condition
    if(n==1) return 1;
    //Calling Condition
    return n*fact(n-1);

}
int main(){
    cout << fact(5);
    
}