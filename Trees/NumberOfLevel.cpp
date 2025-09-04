#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* right;
    Node* left;
    // Constructor with proper parameter and initialization
    Node(int val) {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

int Levels(Node* root){
    if(root==NULL) return 0;
    return 1+Levels(root->left) + Levels(root->right);
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;

    cout << Levels(a)<<endl;
}
