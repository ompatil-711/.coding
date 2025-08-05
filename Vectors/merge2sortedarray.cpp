#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int>&v1,vector<int>&v2){
    vector<int> res;
    int n=v1.size();
    int i=0;
    int j=0;
    int k=0;

    while(i<v1.size()&&j<v2.size()){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
        }
        else {
            res[k]=v2[j];
            j++;
        }
        k++;
    }

    if(i==n){
        while(j<=v2.size()-1){
            res[k]=v2[j];
            j++;
            k++;
        }
    } 

    return res;
}
int main(){
    vector<int>v1;
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    vector<int>v2;
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);

    vector<int>res=mergesort(v1,v2);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " " ;
    } 
    cout << res[0];
}