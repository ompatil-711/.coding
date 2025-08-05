#include<iostream>
using namespace std;

class Node{
public: 
    int val;
    Node* next;
    Node(int v){
        v=val;
        this->next=NULL;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    b->next=c;
    c->next=d;
    a->next=b;

}