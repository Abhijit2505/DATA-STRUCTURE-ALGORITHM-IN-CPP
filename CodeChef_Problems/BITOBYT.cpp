#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long cute,res,T,N,opt;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cute=N/26;
		res=N%26;
		if(res==0)
            {
                cute--;
            }
		opt=pow(2,cute);
		if(res>=1 && res<=2)
		{
			cout<<opt<<" "<<"0"<<" "<<"0"<<"\n";
		}
		else if(res>=3 && res<=10)
		{
			cout<<"0"<<" "<<opt<<" "<<"0"<<"\n";
		}
		else
		{
			cout<<"0"<<" "<<"0"<<" "<<opt<<"\n";
		}
	}
}
