#include<iostream>
// #include<string>
#include<cmath>
#include <algorithm>
// #include <bits/stdc++.h>
// #include <sstream>
#define lld long long int
using namespace std;

int main(int argc, char const *argv[])
{
	lld t,n,k;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n >> k;
		lld a[n];
		lld ans_count = 0;
		for (lld i = 0; i < n; ++i)
		{
			cin>>a[i];
			for (lld j = 0; j <= i; ++j)
			{
				lld m = ceil(k/( i - j + 1));
				int b[m*(i-j)+1] = {0};
				lld temp_m = m;
				lld counter=0;
				while(temp_m--){
					lld temp_j = 0;
					while(temp_j<=i)
					{
						b[counter++] = a[temp_j++];
					}
					// temp_m++;
				}
				// sort(b,b+(m*(i-j)+1));
				// lld ks = ceil(k/m)-1;
				// cout<<"ks is "<<ks<<endl;
				cout<<"m is "<<m<<endl;
				for (int print_b = 0; print_b < m*(i-j)+1; ++print_b)
				{
					cout<<b[print_b]<<" ";
				}
				cout<<endl;
				lld X = b[k-1];
				cout<<"X is "<<X<<endl;
				lld F = count(a+j,a+i+1,X);
				if (F !=0)
				{
					ans_count++;
				}
			}
		}
		cout<<ans_count<<endl;
	}
	return 0;
}