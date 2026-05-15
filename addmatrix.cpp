#include<bits/stdc++.h>
using namespace std;


int main(){

    int r;
    cout<< "Enter r : ";
    cin>>r;
   
    int c;
    cout<< "Enter c : ";
    cin>>c;
    

    int arr[r][c];
    //taking input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    // matrix2
    int r2;
    cout<< "Enter r2 : ";
    cin>>r2;
   
    int c2;
    cout<< "Enter c2 : ";
    cin>>c2;
    
    if(r != r2 || c != c2){
        cout<< "addition not possible as matrix is not equal";
        return 0;
    }

    int arr2[r2][c2];
    //taking input
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    
    

    // printing output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int sum =arr[i][j] + arr2[i][j];
            cout<<sum<<" ";
        }
        cout<< "\n" ;
    }
    return 0;
}
