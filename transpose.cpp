#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r;
    cout << "Enter r : ";
    cin >> r;

    int c;
    cout << "Enter c : ";
    cin >> c;

    int arr[r][c];
    // taking input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            
        }
    }
    cout<<"\n";
    // printing output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // transpose matrix
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}