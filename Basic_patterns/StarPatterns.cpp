#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of N"; //Taking input
    int n = 0;
    cin >> n;
    for(int i=0;i<n;i++){               //First for loop for number of rows
        for(int j=0;j<n;j++){           //Second for loop for number of '*' in each row
            cout << "*";
        }
        cout << "\n";
    }

     for(int i=1;i<=n;i++){     // Number of rows
        for(int j=0;j<i;j++){       // loop to control number of '*' in each row
            cout << "*";
        }
        cout << "\n";
    }
        cout<< "\n";
    for(int i=n;i>0;i--){       // reverse stars
        for(int j=i;j>0;j--){
            cout<< '*';
        }
        cout<<"\n";
    }
        cout<< "\n";
    for(int i=1;i<=n;i++){     //loop for rows
        for(int j=i;j<n;j++){      //loop for spaces soo that '*' prints in middle
            cout<<" ";
        }
            for(int k=0;k<(2*i -1);k++){    //loop for printing '*' 2*rows -1 times
                cout<< "*";
            }
        
        cout << "\n";
    }    

    for(int i=n;i>0;i--){  //Loop from n to 1 for rows
        for(int j=i;j<n;j++){   //At every row value of i decreases and hance a space is added
            cout << " ";
        }
        for(int k=0;k<(2*i-1);k++){ // loop to print '*' 
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    for(int i=1;i<=n;i++){     //loop for rows
        for(int j=i;j<=n;j++){      
            cout<<"*";
        }
            for(int k=1;k<(2*i -1);k++){    
                cout<< " ";
            }
            for(int j=n;j>=i;j--){      
            cout<<"*";
        }
            for(int k=1;k<(2*i -1);k++){    
                cout<< " ";
            }
        
        cout << "\n";
    }    
    for(int i=n;i>0;i--){  //Loop from n to 1 for rows
        for(int j=i;j<=n;j++){   
            cout << "*";
        }
        for(int k=1;k<(2*i-1);k++){ // loop to print '*' 
            cout << " ";
        }
         for(int j=n;j>=i;j--){   
            cout << "*";
        }
        for(int k=0;k<(2*i-1);k++){  
            cout << " ";
        }
        cout << "\n";
    }

    
    

    return 0;
}