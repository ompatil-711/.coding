//Two Pointers
#include<iostream>
#include<vector>

using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    display(v);
    int i=0; int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++ ;
        else if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0) {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    display(v);
}