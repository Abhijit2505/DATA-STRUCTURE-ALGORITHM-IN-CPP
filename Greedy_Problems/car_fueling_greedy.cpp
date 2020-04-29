#include<bits/stdc++.h>
using namespace std;

int compute_min_refills(int dist, int tank, int* stops, int sizes)
{
    int max_dist_index;
    int prev_max_index=0;
    int total_refill = 0;
    int i=0;
    int n = sizes;
    while(i<n)
    {
        int j=i+1;
        while(j<n && stops[j]-stops[i]<=tank)
        {
            max_dist_index=j;
            j++;
        }
        if(prev_max_index<max_dist_index)
        {
            i = max_dist_index;
            prev_max_index = max_dist_index;
            if(i<n)
            {
                total_refill++;
            }
        }
        else
        {
            break;
        }
    }
    if(max_dist_index==n-1)
    {
        return total_refill-1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int d;
    cin >> d;
    int m;
    cin >> m;
    int n;
    cin >> n;

    int* stops = new int[n+2];
    stops[0] = 0;
    stops[n+1] = d;
    for (int i = 1; i <= n; i++)
        cin >> stops[i];

    cout << compute_min_refills(d, m, stops,n+2) << "\n";

    return 0;
}
