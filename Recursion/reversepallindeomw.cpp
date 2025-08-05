#include<iostream>
using namespace std;

bool isPalindrome(string s, int i , int j){
    if(s[i] == s[j]) return true;
    if(s[i] != s[j]) return false ;
    else isPalindrome(s,i+1,j-1);

    
    
}

int main(){
    int string s;
    cout << isPalindrome(s) << endl;
}