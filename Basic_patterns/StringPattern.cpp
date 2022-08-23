#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of N"; //Taking input
    int n = 0;
    cin >> n;

    for(int i=1;i<=n;i++){      //Loop for number of rows
        for(int j=1;j<=i;j++){  //Loop which will print the value of J which is looping till it reaches value of i
            cout<<((char)(j+64));
        }
        cout << "\n";
    }

    for(int i=1;i<=n;i++){      //Loop for number of rows
        for(int j=1;j<=i;j++){  //Loop which prints value of 'i' 'j' times
            cout<<((char)(i+64));
        }
        cout << "\n";
    }
    cout<< "\n";
//reverse numbers
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<< ((char)(j+64));
        }
        cout<<"\n";
    }
    cout << "\n";

    for(int i=1;i<=n;i++){     //loop for rows
        for(int j=i;j<n;j++){      //loop for spaces soo that 'j' prints in middle
            cout<<" ";
        }
            for(int k=0;k<(2*i -1);k++){    //loop for printing 'j' 2*rows -1 times
                cout<< ((char)(k+65));    //Here i have taken K+65 because my k loop starts from 0
            }
        
        cout << "\n";
    }
    cout << "\n";

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << ((char)((n-j)+64));
        }
        cout << "\n";
    } 
    cout << "\n";
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << ((char)((n+j-i)+65));
        }
        cout << "\n";
    } 
    return 0;
}