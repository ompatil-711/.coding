#include<iostream>
using namespace std;

Class Stack{
    int* arr;
    int top;

    public:
    Stack(int c){
        this-> capacity = c;
        arr = new int[c];
        this->top = -1;

    }

    void push(int data){
        if(this->top == this->capacity -1){
            cout << "Overflow\n";
            return ;
        }

        this->top++;
        this->arr[this->top] = data;

    }

    int pop(){
        if(this->top==-1){
            cout << "underflow";
            return;

        }
    }
}

int main(){

}