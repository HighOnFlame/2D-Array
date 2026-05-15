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
    int maxElement = arr[0][0];
    int minElement = arr[0][0];
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] > maxElement){
                maxElement = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
            if(arr[i][j] < minElement){
                minElement = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    cout << "Max element: " << maxElement << " at index [" << maxRow << "][" << maxCol << "]" << endl;
    cout << "Min element: " << minElement << " at index [" << minRow << "][" << minCol << "]" << endl;
    
    return 0;
}
