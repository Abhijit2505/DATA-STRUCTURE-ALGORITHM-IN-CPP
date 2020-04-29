#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll total_coins(ll n)
{
    int total = 0;
    while(n!=0)
    {
        if(n>=10)
        {
            total = total + n/10;
            n= n%10;
        }
        if(n>=5)
        {
            total = total + n/5;
            n = n%5;
        }
        if(n<5)
        {
            total = total+n;
            n = 0;
        }
    }
    return total;
}

int main()
{
    ll n;
    cin >> n;
    cout << total_coins(n) << endl;
    return 0;
}
