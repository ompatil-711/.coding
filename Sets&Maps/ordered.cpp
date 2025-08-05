#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    for(int ele : s ){
        cout << ele << endl;
    }
}