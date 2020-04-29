#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    long long int i,j,t,n;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int m = INT_MAX,x;
        cin >> n;
        for(j=0;j<n;j++)
        {
            cin >> x;
            m = min(m,x);
        }
        cout << m << endl;
    }
    return 0;
}
