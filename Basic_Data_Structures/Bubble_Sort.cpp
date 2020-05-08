# include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swapping(ll &p,ll &q)
{
    ll temp = p;
    p = q;
    q = temp;
}

int main()
{
    ll n;
    cin >> n;
    ll* arr = new ll[n];
    for(ll i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swapping(arr[i],arr[j]);
            }
        }
    }
    for(ll i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
