#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float gpa;

    Student (string s, int a, float g){
        name = s;
        age = a;
        gpa = g;
    }
};
    

int main(){
    Student s1 = {"Om",20,8.2};
    cout << s1.name << " " << s1.age << " " << s1.gpa  << " "<< endl;
}