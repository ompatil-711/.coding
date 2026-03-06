#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    int l=0;
    int sl=0;

    for(int i=0;i<n;i++){
        if(nums[i]>sl && nums[i]>l){
            sl=l;
            l = nums[i];  
        }
        if(nums[i]>sl && nums[i]<l){
            sl = nums[i];
        }
    }

    cout << sl ;

}