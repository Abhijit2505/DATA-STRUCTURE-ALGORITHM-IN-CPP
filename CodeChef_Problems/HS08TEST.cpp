#include<iostream>
using namespace std;

double function1(double balance,int withdraw)
{
    if((withdraw+0.50) < balance && withdraw%5==0)
    {
        return balance-withdraw-0.50;
    }
    else
    {
        return balance;
    }
}

int main()
{
    double n;
    int x;
    cin >> x >> n;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << function1(n,x) << endl;
    return 0;
}
