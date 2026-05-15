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
            while (arr[i][j] != 0 && arr[i][j] != 1)
            {
                cout << "Enter only 0 and 1 : ";
                cin >> arr[i][j];
            }
        }
    }

    // printing output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < r; i++)
    {
        int count1 = 0;
        int count0 = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        cout << "Row " << i << " -> ";
        cout << "0s = " << count0 << ", ";
        cout << "1s = " << count1 << endl;
    }

    return 0;
}
