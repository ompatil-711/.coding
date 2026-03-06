#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int i = 0;
    int j = s.size() - 1;

    while(i <= j){
        if(s[i] != s[j]){
            cout << "false";
            return 0;
        }
        i++;
        j--;
    }

    cout << "true";
}