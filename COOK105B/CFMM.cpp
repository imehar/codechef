#include<iostream>
#include <map>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	int testcase,n;
	cin>>testcase;
	while(testcase--){
		cin>>n;
		string a[n];
		map<char, int> m;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			for (int j = 0; j < a[i].length(); ++j)
			{
				if (a[i][j] == 'c' || a[i][j] == 'o' || a[i][j] == 'd' || a[i][j] == 'e' || a[i][j] == 'h' || a[i][j] == 'f' )
				{
					if (m.find(a[i][j]) == m.end())
					{
						m[a[i][j]] = 1;
					}else{
						m[a[i][j]]+=1;	
					}
					
				}
			}
		}
		if (m.find('c') != m.end())
		{
			m['c'] = m['c']/2;
		}
		if (m.find('e') != m.end())
		{
			m['e'] = m['e']/2;
		}
		int max_times= 1000000000;
		if (m.size()==6)
		{
			for (auto i = m.begin(); i != m.end(); ++i)
			{
				// cout<<i->first<<" "<<i->second<<endl;
				if (i->second < max_times)
				{
					max_times = i->second;
				}
			}
		}
		
		if (max_times == 1000000000)
		{
			cout<<0<<endl;
		}
		else{
			cout<<max_times<<endl;
		}
	}
	return 0;
}