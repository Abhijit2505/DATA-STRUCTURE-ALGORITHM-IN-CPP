# include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, SizeOfKnapSack;
	cin >> n >> SizeOfKnapSack;
	vector<pair<int, int>> Value_Width(n);
	vector<pair<double,int>> ValuePerUnit(n);
	
	/// Value_width.first is the "value" and Value_Width.second is the "weight"
	for (int i = 0; i < n; i++) 
    {
		cin >> Value_Width[i].first >> Value_Width[i].second;
		ValuePerUnit[i].first = 1.0 * Value_Width[i].first / Value_Width[i].second;
		ValuePerUnit[i].second = Value_Width[i].second;
	}
	sort(ValuePerUnit.begin(), ValuePerUnit.end(),greater<pair<double,int>>());
	double Res = 0;
	for (int i = 0; i < ValuePerUnit.size() && SizeOfKnapSack>0; i++) 
	{
		Res += min(ValuePerUnit[i].second, SizeOfKnapSack)*ValuePerUnit[i].first;
		SizeOfKnapSack -= min(ValuePerUnit[i].second, SizeOfKnapSack);
	}
	cout << fixed << setprecision(4) << Res << endl;
}
