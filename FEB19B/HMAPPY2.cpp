//HMAPPY2


#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main(int argc, char const *argv[])
{
	lld t,n,k,a,b;
	cin>>t;
	while(t--){
		cin>> n >> a >> b >> k;
		lld na = n/a;
		lld nb = n/b;
		lld nab = na;
		lld lcm = (a*b)/(__gcd(a,b));
		nab = n/lcm;
		if (((na + nb) - 2*nab) >=k)
		{
			cout<<"Win"<<endl;
		}else{
			cout<<"Lose"<<endl;
		}
	}
	return 0;
}