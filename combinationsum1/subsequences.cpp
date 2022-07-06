#include <bits/stdc++.h>
using namespace std;

void printX(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    //pick an particular index into the subsequence
    ds.push_back(arr[ind]);
    printX(ind+1, ds, arr, n);
    //not pick the last element
    ds.pop_back();
    //the not picked element is not added to the subsequence and onto next element
    printX(ind+1, ds, arr, n);

}

int main(){

    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printX(0, ds, arr, n);
    
    return 0;
}