#include<iostream>
#include<string>
#include <algorithm>
// #include <bits/stdc++.h>
// #include <sstream>
// #define lld long long int
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	string s;
	string w = "";
	for (int i = 1; i <= t; ++i)
	{
		cin>>s;
		sort(s.begin(), s.end());
		for (int j = 0; j < s.length(); ++j)
		{
			cout<<i<<" ";
		}
		w += s;
	}
	
	return 0;
}