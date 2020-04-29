#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int* lower_arr = new int[n/2];
    int* upper_arr = new int[n/2];
    for(int i=0;i<n/2;i++)
    {
        lower_arr[i] = arr[i];
        upper_arr[i] = arr[i+(n/2)];
    }
    int* new_arr = new int[n];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            new_arr[i] = lower_arr[i/2];
        }
        else
        {
            new_arr[i] = upper_arr[i/2];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << new_arr[i] << " ";
    }
}
