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
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< "\n" ;
    }

    int l1,r1,l2,r2;
    cout<< "Enter l1 : ";   
    cin>>l1;
    cout<< "Enter r1 : ";   
    cin>>r1;
    cout<< "Enter l2 : ";
    cin>>l2;
    cout<< "Enter r2 : ";
    cin>>r2;
    int sum = 0;
    for(int i=l1;i<=r1;i++){
        for(int j=l2;j<=r2;j++){
            sum += arr[i][j];
        }
    }
    cout<< "Sum: " << sum << endl;

    return 0;
}
