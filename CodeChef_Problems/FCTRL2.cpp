#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int array[1000],k=1,n;
        array[0]=1;
        cin >> n;
        for(int i=2;i<=n;i++)
        {
            int cute = 0,carry;
            for(int j=0;j<k;j++)
            {
                carry = array[j]*i+cute;
                array[j] = carry%10;
                cute = carry/10;
            }
            while(cute>0)
            {
                array[k++]=cute%10;
                cute = cute/10;
            }
        }

        for(int i=k-1;i>=0;i--)
        {
            cout << array[i];
        }
        cout << endl;

    }
}
