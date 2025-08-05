#include<iostream>
using namespace std;
void fun(int x){
    if(x==0) return;
    else cout << "Hello"<< endl;
    fun(x-1);
}
int main(){
    fun(3);
}