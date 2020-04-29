#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // Creating multidimensional array dynamically
    int** arr = new int*[n];
    int** rotated_arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
        rotated_arr[i] = new int[n];
    }
    
    // Taking input from the user manually
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin >> arr[i][j];
        }
    }
    
    // rotating the array by using the transformation formula
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            rotated_arr[n-1-j][i] = arr[i][j];
        }
    }
    
    // printing out the array manually
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << rotated_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
