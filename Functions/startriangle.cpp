#include<iostream>
using namespace std;

void StarTriangle(int x){
    for(int i=1; i<=x;i++){
        for(int j=1;j<=i; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
int main(){
    int n;
    for(int k=0; k<=n;k++)
   { int c;
    cin >> c;
    StarTriangle(c);}
}