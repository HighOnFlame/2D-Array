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

    // finding max and min element
    int maxELement = arr[0][0];
    int minElement = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] > maxELement){
                maxELement = arr[i][j];
            }
            if(arr[i][j] < minElement){
                minElement = arr[i][j];
            }
        }
    }
    cout << "Max element: " << maxELement << endl;
    cout << "Min element: " << minElement << endl;
    return 0;
}
