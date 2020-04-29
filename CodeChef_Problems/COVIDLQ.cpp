#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
       long long int n,p;
        cin >> n;
        vector<long long int> v;
        for(long long int i=0;i<n;i++)
        {
            cin >> p;
            v.push_back(p);
        }
        long long flag = 0,count = 0;
        long long int i = 0;
        while(i<n)
        {
            if(v[i]==1 && i!=n-1)
            {
                int j=i+1;
                count++;
                while(v[j]!=1 && j<n)
                {
                    count++;
                    if(j==n-1 && v[j]==0)
                    {
                        count = 0;
                    }
                    // cout << count << " after " << "* " << j << endl;
                    j++;
                }
                if(count<6)
                    flag += count;
                count = 0;
            }
            // cout << flag << " for " << i << endl;
            i++;
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
