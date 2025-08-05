// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp;
//     temp =a;
//     a=b;
//     b=temp;
    
// }
// int main(){
//     int a;
//     int b;
//     cin >> a >> b;
//     swap(a,b);
//     cout << a << " " << b ;
// }
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a;
    int b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
