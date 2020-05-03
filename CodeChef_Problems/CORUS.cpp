#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        string vir_name;
        cin >> vir_name;
        map<char,ll> mapp;
        for(ll i=0;i<n;i++)
        {
            char key = vir_name[i];
            if(mapp.count(key)==0)
            {
                mapp[key] = 1;
            }
            else
            {
                mapp[key]++;
            }
        }
        while(q--)
        {
            ll c;
            cin >> c;
            ll pending=0;
            map<char,ll>::iterator it = mapp.begin();
            while(it != mapp.end())
            {
                ll port = it->second;
                port -= c;
                if(port>0)
                {
                    pending+=port;
                }
                it++;
            }
            cout << pending << endl;
        }
    }
}
