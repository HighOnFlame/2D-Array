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
    
    // printing output
    for(int i=0;i<r;i++){
        if(i % 2 == 0){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=c-1;j>=0;j--){ 
                cout<<arr[i][j]<<" ";
            }
        }
        cout<< "\n" ;
    }
    return 0;
}
