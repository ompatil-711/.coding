#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(9);
    q.push(8);
    q.push(7);
    cout << q.front()<<endl;
}