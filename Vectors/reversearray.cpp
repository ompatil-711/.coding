#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    vector<int>v1(sizeof(v));
    int i=0;
    int j=n-1;
    for(int i=0;j=n-1;i<=j,i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]= temp;

    }
    for(int i=0;i<n;i++){
        cout << v1[i] << " ";
    }
    }