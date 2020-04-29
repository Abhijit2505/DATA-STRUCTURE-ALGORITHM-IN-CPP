#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, h, y1, y2, l;
	    cin >> n >> h >> y1 >> y2 >> l;
	    int alchemist[n][2];
	    for(int i = 0; i < n; i++){
	        cin >> alchemist[i][0] >> alchemist[i][1];
	    }
	    int i=0;
	    for(;l > 0 && i < n;i++)
            {
	        if(alchemist[i][0] == 1)
	        {
	            if(h-y1 <= alchemist[i][1]);
	            else
	            {
	                l--;
	            }
	        }
	        else
	        {
	            if(y2 >= alchemist[i][1]);
	            else
	            {
	                l--;
	            }
	        }
	    }
	    if(l == 0)
	    {
	        i--;
	    }
	    cout << i << endl;
	}
	return 0;
}
