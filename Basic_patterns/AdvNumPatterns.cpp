#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of N"; //Taking input
    int n = 0;
    cin >> n;
   for(int i=1;i<=n;i++){       //loop for rows
    for(int j=1;j<=i;j++){      //loop for values
       if(i%2 != 0){            //checking if the value of i is even or odd
        if(j%2 != 0) cout << "1";       //depending on value of i the the value of j can either start with '0' or '1'

        else cout << "0";
       }
       else{
        if(j%2 != 0) cout << '0';

        else cout << "1";
       }
    }
    cout << "\n";
   }

    for(int i=1;i<=n;i++){       // loop for row
   //loop for printing value of j and then adding empty spaces
    for(int j=1;j<=n;j++){      
        if(j<=i) cout << j;

        else
         cout << " ";
    }
     //we keep k=N soo every time we get k>i we print that value then it decrements otherwise we print empty space
        for(int k=n;k>=1;k--){
            if(k>i){
                cout << " ";
            }
            else cout << k;
        
    }
    cout << "\n";
   }
   cout << "\n";

   
    return 0;
}