#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void RemoveHead(Node*& head){
        Node* temp;
        temp = head;
        head = temp-> next;

    };
    
int main(){

    int n;
    cin >> n;   // size of linked list

    if(n == 0) return 0;

    int x;
    cin >> x;   // first value

    Node* head = new Node(x);   // create first node
    Node* temp = head;          // pointer to build list

    for(int i = 1; i < n; i++){
        cin >> x;
        Node* newNode = new Node(x);
        temp->next = newNode;
        temp = newNode;
    }

    // Printing linked list
    temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    RemoveHead(head);
    cout << endl;
    temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

}