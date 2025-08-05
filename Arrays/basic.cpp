#include<iostream>
using namespace std;

int main(){
    int marks[6];
    
    cout << "Enter the mmarks of the student"<< endl;
    for(int i=0;i<=5;i++){
        cin >> marks[i];
    }
    for(int i=0; i<=5;i++){
        if(marks[i]<=35) cout << i ;
        

    }
}