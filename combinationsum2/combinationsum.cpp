#include <bits/stdc++.h>
using namespace std;

void combinationalsum(int ind, vector<int> &arr,vector<vector<int>> &ans, int target, vector<int> &ds){

    if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i > ind && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        combinationalsum(i+1, arr, ans, target - arr[i], ds);
        ds.pop_back();
    }

}


int main(){

    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int>ds;
    combinationalsum(0, candidates, ans, target, ds);
    int a = ans.size();
    int b = ans[0].size();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << ans[i][j] << " \n"[j==b-1];
        }
    }
    return 0;
}