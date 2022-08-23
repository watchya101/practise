#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //cout << "Enter the value of N"; //Taking input
    int n = 5;
    int count = 1;
    //cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
    return 0;
}