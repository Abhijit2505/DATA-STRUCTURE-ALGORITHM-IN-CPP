#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll str_len = s.size();
        map<char,int> mapp1;
        map<char,int> mapp2;
        ll half = str_len/2;
        for(ll i=0;i<half;i++)
        {
            char key1 = s[i];
            char key2;
            if(str_len%2==0)
            {
                key2 = s[half+i];
            }
            else
            {
                key2 = s[half+1+i];
            }
            if(mapp1.count(key1)==0)
            {
                mapp1[key1] = 1;
            }
            else
            {
                mapp1[key1]++;
            }
            if(mapp2.count(key2)==0)
            {
                mapp2[key2] = 1;
            }
            else
            {
                mapp2[key2]++;
            }
        }
        int flag = 0;
        ll j=0;
        while(flag==0 && j<half)
        {
            if(mapp1[s[j]] == mapp2[s[j]])
            {
                j++;
                continue;
            }
            flag++;
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
}
