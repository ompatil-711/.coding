#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> st;

    
    for(int i=0;i<s.size();i++){
        
        if(s[i] == '[' || s[i] == '{' || s[i] == '(' ){
            st.push(s[i]);
        }
        if(s[i] == ']' ){
            if(st.top()=='['){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        if(s[i] == '}' ){
            if(st.top()=='{'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        if(s[i] == ')' ){
            if(st.top()=='('){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    if(st.empty()) cout << "true";
    else cout << "false";
}
