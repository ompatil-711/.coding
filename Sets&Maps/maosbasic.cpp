#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "raghav";
    p1.second = 01;
    pair<string,int> p2;
    p2.first = "om";
    p2.second = 80;
    pair<string,int> p3;
    p3.first = "abc";
    p3.second = 87;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m["harsh"] = 15;
    m["lokesh"] = 67;
    for(pair<string,int> p :m){
        cout <<p.first<< " " << p.second<<endl;
    }
}
