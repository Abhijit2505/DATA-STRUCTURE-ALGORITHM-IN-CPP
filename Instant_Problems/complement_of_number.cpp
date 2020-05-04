#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    queue<int> s;
    cin >> a;
    while(a!=0)
    {
       s.push(a%2);
       a = a/2;
    }
    int p = 0;
    int count =0;
    while(!s.empty())
    {
        int q = s.front();
        cout << "q = " << q << endl;
        if(q==1)
        {
            q=0;
        }
        else if(q==0)
        {
            q=1;
        }
        p+=q*pow(2,count);
        count++;
        cout << "count = " << count << endl;
        cout << "p = " << p << endl;
        s.pop();
    }
    cout << p << endl;
    return 0;

}
