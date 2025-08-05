#include<iostream>
using namespace std;
int print(int i,int n){
    if(i>n) return 1;
    cout << i << endl;
    print(i+1,n);
}
int main(){
    int n;
    cin >> n;
    print(1,n);
}