#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int count = x / 5;       
    if (x % 5 != 0) {        
        count += 1;          
    }

    cout << count << endl;   
    return 0;
}
