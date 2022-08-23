#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of N"; //Taking input
    int n = 0;
    cin >> n;

    for(int i=1;i<=n;i++){      //Loop for number of rows
        for(int j=1;j<=i;j++){  //Loop which will print the value of J which is looping till it reaches value of i
            cout<<j;
        }
        cout << "\n";
    }

    for(int i=1;i<=n;i++){      //Loop for number of rows
        for(int j=1;j<=i;j++){  //Loop which prints value of 'i' 'j' times
            cout<<i;
        }
        cout << "\n";
    }
    cout<< "\n";
//reverse numbers
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<< j;
        }
        cout<<"\n";
    }
    return 0;
}