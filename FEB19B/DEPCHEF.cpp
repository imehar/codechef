//DEPCHEF


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int d[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>d[i];
		}
		int safe = 0;
		if (a[n-1] + a[1] < d[0])
		{
			safe = d[0];
		}
		for (int i = 1; i < n-1; ++i)
		{
			if (i+1 < n)
			{
				if (a[i-1]+ a[i+1] < d[i] && d[i] > safe)
				{
					safe = d[i];
				}
			}
		}
		if (a[n-2]+a[0] < d[n-1] && d[n-1] > safe)
		{
			safe = d[n-1];
		}
		if (safe==0)
		{
			cout<<-1<<endl;
		}else{
			cout<<safe<<endl;
		}
	}
	return 0;
}