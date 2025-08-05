#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int> gt;
    stack<int> pt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        gt.push(pt.top());
        pt.pop();
    }
    while(pt.size()>0){
        st.push(gt.top());
        gt.pop();
    }
    cout<<endl;
    print(st);
}