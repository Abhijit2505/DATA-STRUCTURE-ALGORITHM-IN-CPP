#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int a,b,t,sum;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a >> b;
        sum = a+b;
        cout << sum << endl;
    }
    return 0;
}
