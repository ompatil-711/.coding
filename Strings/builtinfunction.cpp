#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    // cout << str.length();
    // cout << str.size();
    str.push_back('a');
    cout << str<< endl;
    str.pop_back();
    cout << str<< endl;
    string reverse(str.begin(),str.end());
    cout << reverse;
}