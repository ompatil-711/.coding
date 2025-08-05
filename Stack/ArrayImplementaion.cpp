#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
        int arr[5];
        int idx=-1;
        void push(int val){
            idx++;
            arr[idx]=val;
        }
        void pop(){
            idx--;
        }

        int top(){
            return arr[idx];
        }
};
int main(){
    Stack st;
    st.push(10);
    cout << st.top();
    st.pop();
    st.top();
}