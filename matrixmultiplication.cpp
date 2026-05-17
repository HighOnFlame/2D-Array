#include<bits/stdc++.h>
using namespace std;


int main(){

    int r1;
    cout<< "Enter r1 : ";
    cin>>r1;
   
    int c1;
    cout<< "Enter c1 : ";
    cin>>c1;
   

    int arr[r1][c1];
    //taking input
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    
    // printing output
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< "\n" ;
    }

    int r2;
    cout<<"Enter r2 : ";
    cin>>r2;

    int c2;
    cout<<"Enter c2 : ";
    cin>>c2;

    int brr[r2][c2];
    //taking input
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }
    
    // printing output
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<< "\n" ;
    }

    if(c1 != r2){
        cout << "Matrix multiplication not possible";
        return 0;
    }

    //matrix multiplication
    int res[r1][c2];
    int k = c1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j] = 0;
            for(int k=0;k<c1;k++){
                
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<< "\n" ;
    }
    return 0;
}
