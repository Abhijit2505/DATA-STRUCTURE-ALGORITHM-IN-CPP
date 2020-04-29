#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int a,b,t,count=0;
    cin >> a >> b;
    for(int i=0;i<a;i++)
    {
        cin >> t;
        if(t%b==0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
