#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter thge number of the rows :" << endl;
    cin >> n;
    cout << "Enter the number of the coloums :" << endl;
    cin >> m;
    for(int i=0;i<n;i++){
        for(int i =0;i<m;i++){
            cout << "*" ;
        }
        cout <<endl;
    }
}