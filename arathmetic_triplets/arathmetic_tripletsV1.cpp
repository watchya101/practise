#include <bits/stdc++.h>
using namespace std;



void logic(vector<int>& nums, int diff){
    int n = nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff) ans++;
            }
        }
    }
    cout<< ans;

};

int main(){
    vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
    cout<<"Input \n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i] << "  ";
    }
    cout << "\ndifference betwn is\t" << diff << "\n";
    logic(nums, diff);
    return 0;
}