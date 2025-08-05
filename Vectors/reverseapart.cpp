#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]= temp;
        i++;
        j--;

    }
    return;

}
int main(){
    cout << "Enter the size of an array: " ;
    int n ;
    cin >>n;
    vector<int>v;
    // v.push_back(6);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(7);
    // v.push_back(4);
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout <<endl;
    display(v);
    reversePart(1,6,v);
    display(v);

}