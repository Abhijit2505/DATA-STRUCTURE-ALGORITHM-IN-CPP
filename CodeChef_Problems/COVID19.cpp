#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int* arr = new int[n];
        int* dist_arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=1;i<n;i++)
        {
            dist_arr[i] = arr[i] - arr[i-1];
        }
        int starting_index = 0;
        int target;
        int greatest = 1;
        int smallest = n;
        for(int i=1;i<=n;i++)
        {
            if(i==n)
            {
                int p = n - starting_index;
                if(p>greatest)
                {
                    greatest = p;
                }
                if(p < smallest)
                {
                    smallest = p;
                }
                break;
            }
            if(dist_arr[i] > 2)
            {
                target = i;
                int p = target-starting_index;
                if(p>greatest)
                {
                    greatest = p;
                }
                if(p<smallest)
                {
                    smallest = p;
                }
                starting_index = target;
            }
        }
        cout << smallest << " " << greatest << endl;
    }
}
