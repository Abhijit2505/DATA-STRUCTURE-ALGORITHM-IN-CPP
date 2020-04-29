#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
       long long int n,p,sum=0;
        cin >> n;
        vector<long long int> v;
        for(long long int i=0;i<n;i++)
        {
            cin >> p;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        long long int count = 0;
        while(n--)
        {
            if((v[n]-count)>0)
                sum+=v[n]-count;
            count++;
        }
        cout << sum%1000000007 << endl;
    }
}
