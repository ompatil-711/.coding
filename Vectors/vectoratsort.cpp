#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    
    cout << "Vector elements before sorting:" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
    cout << endl;
    
    sort(v.begin(), v.end());
    
    cout << "Vector elements after sorting:" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
    cout << endl;

    return 0;
}
