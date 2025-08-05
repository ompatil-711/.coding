#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(5);
    v.push_back(11);
    int idx;
    int x;
    cin >> x;
    idx =-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i] == x){
            idx=i;
            break;
        }
    }
    cout << idx <<endl;
}