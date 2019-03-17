#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(int argc, char const *argv[])
{
	lld t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<lld> pos;
		vector<lld> neg;
		lld temp;
		lld minsum = 0;
		lld maxsum =0;
		lld negc = 0;
		lld posc = 0;
		for (lld i = 0; i < n; ++i)
		{
			cin>>temp;
			if (temp < 0)
			{
				neg.push_back(abs(temp));
				minsum += abs(temp);
				negc++;
			}else
			{
				maxsum += temp;
				pos.push_back(temp);
				posc++;
			}
		}
		// lld minsum = accumulate(neg.begin(), neg.end(),0);
		// lld maxsum = accumulate(pos.begin(), pos.end(),0);
		// cout<<abs(minsum)<<" "<<maxsum<<endl;
		lld maxcount = 0;
		lld mincount = 0;
		if (minsum > maxsum)
		{
			maxcount = negc;
			if (posc ==0)
			{
				mincount = maxcount;
			}else{
				mincount = posc;
			}
			
		}else{
			maxcount = posc;
			if (negc == 0)
			{
				mincount = maxcount;
			}else{
				mincount = negc;
			}
			
		}
		cout<<maxcount<<" "<<mincount<<endl;

	}
	return 0;
}