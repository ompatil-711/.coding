#include<iostream>
using namespace std;

class Student{
public :
    string name;
    int age;
    float gpa;
};
int main(){
    Student s1;
    s1.name = "Om";
    s1.age = 21;
    s1.gpa = 8.56;
    cout << s1.age;
}