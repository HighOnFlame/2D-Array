#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no of rows and columns : ";
    cin>>n;
    int arr[n][n];
    // taking input 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // printing matrix 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }

    cout<<endl;

    //transposing the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            // int temp=arr[i][j];
            // arr[i][j]=arr[j][i];
            // arr[j][i]=temp;
            swap(arr[i][j],arr[j][i]);
        }
    }
    //reversing rows of transpose matrix

    // for(int i=0;i<n;i++){
    //     int j=0;
    //     int k=n-1;
    //     // swap arr[i][j] and arr[i][k]
    //     // while(j<k){
    //     // int temp = arr[i][j];
    //     // arr[i][j] = arr[i][k];
    //     // arr[i][k] = temp;
    //     // j++;
    //     // k--;
    //     }
    // }
    for(int i=0; i<n; i++){
        reverse(arr[i], arr[i] + n);
    }

     //printing output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}