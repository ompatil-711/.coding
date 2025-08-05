#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function
using namespace std;

void change(vector<int>&a){
    a[0]=100;
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout << v[i] <<endl;
    }
    change(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] <<endl;
    }

}
