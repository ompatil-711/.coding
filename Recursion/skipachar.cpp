#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="My name";
    string s="";
    for(int i =0;i<str.size();i++){
        if(str[i] != 'a') s+=str[i]; 
    }
    cout << s;
}
