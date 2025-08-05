#include<iostream>
using namespace std;


int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main(){
    int n,r;
    cin >> n >> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int nCr = combination(n,r);
    cout << "The desired output is :" << nCr << endl;
}
//Review the above code once more
