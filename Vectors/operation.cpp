#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    cout<<v.size()<< endl;
    cout << v.capacity()<< endl;
    for(int i=0;i<=3;i++){
        cout << v[i] << endl;
    }
    v.pop_back();
    v.pop_back();
    for(int i=0;i<=2;i++){
        cout << v[i] << endl;
    }
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
}