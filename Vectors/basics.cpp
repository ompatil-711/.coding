#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(0);
    v.push_back(2);
    for(int i=0;i<=3;i++){
        cout << v[i];
        cout << endl;
    }   
}