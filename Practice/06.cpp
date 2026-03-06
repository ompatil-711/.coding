#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;


    vector<int> arr;

    for(int i=0;i<arr.size();i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for(int i = 0; i < n-1; i++) {

        for(int j = 0; j < n-i-1; j++) {

            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i){
            cout << i;
        }
    }
}