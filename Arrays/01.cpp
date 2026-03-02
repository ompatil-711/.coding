#include<iostream>
#include <sstream>
using namespace std;

int main(){
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<int> arr;
    int x;

    while(ss >> x) {
        arr.push_back(x);
    }

    for(int i=0;i<arr.size();i++){
        
    }

}