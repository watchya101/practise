#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& nums,int diff, int ans){
     cout<<"Input \n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i] << "  ";
    }
    cout << "\ndifference betwn is\t" << diff << "\n";
        cout<< ans;
}

void logic(vector<int>& nums, int diff){
    int n = nums.size();
    int ans=0;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto &i:nums){
        if(i-diff>=0 && mpp[i-diff] && mpp[i-2*diff]) ans++;
    }
    print(nums, diff, ans);

}

int main(){
    vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
   
   
    logic(nums, diff);
    return 0;
}