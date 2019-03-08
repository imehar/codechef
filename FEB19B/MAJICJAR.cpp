//MAJICJAR


#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(int argc, char const *argv[])
{
	lld t,n;
	cin>>t;
	// string s;
	while(t--){
		cin>>n;
		lld a[n];
		lld sum = 0;
		lld max = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum += (a[i] -1 );
		}
		max = sum  + 1;
		cout<<max<<endl;
	}
	return 0;
}