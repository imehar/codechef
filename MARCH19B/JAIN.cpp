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
	while(t--){
		cin>>n;
		string d[n];
		int ct = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>d[i];
			int ai=0,ei=0,ii=0,oi=0,ui=0;
			if ( d[i].find('a') != string::npos)
			{
				ai = 1;
			}
			if (d[i].find('e') != string::npos)
			{
				ei = 1;
			}
			if (d[i].find('i') != string::npos)
			{
				ii = 1;
			}
			if (d[i].find('o') != string::npos)
			{
				oi = 1;
			}
			if (d[i].find('u') != string::npos)
			{
				ui = 1;
			}
			if (ai !=0 && ei!=0 && ii!=0 && oi!=0 && ui!=0)
			{
				ct += (i);
				continue;
			}
			for (int j = 0; j < i; ++j)
			{
				// if (i!=j)
				// {
					int aj = 0,ej=0,ij=0,uj=0,oj=0;
					if (ai == 0 )
					{
						if ( d[j].find('a') != string::npos)
						{
							aj = 1;
						}
					}
					if (ei ==0)
					{
						if ( d[j].find('e') != string::npos)
						{
							ej = 1;
						}
					}
					if (ii==0)
					{
						if ( d[j].find('i') != string::npos)
						{
							ij = 1;
						}
					}
					if (oi == 0)
					{
						if ( d[j].find('o') != string::npos)
						{
							oj = 1;
						}
					}
					if (ui==0)
					{
						if ( d[j].find('u') != string::npos)
						{
							uj = 1;
						}
					}
					if ((ai + aj) !=0 && (ei+ej)!=0 && (ii+ij)!=0 && (oi +oj)!=0 && ( ui+uj)!=0 )
					{
						ct++;
					}
				// }
				
			}
		}
		cout<<ct<<endl;
	}
	
	return 0;
}