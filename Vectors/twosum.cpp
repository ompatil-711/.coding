#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    cout << "give Target:";
    cin >> x;
    vector<int>v;
    int n;
    cout << "Enter The Size: " ;
    cin >> n;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n-1;j++){
            if(v[i]+ v[j]== x){
                cout << "("<<i<<","<<j<<")"<< endl;
            }
        }
    }
}