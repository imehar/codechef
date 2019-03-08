//CHEFING


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		string inp [n];
		for (int i = 0; i < n; ++i)
		{
			cin>>inp[i];
		}
		string fir = inp[0];
		set<char> result(fir.begin(),fir.end());
		if (n>=2)
		{
			for (int i = 0; i < fir.length(); ++i)
			{
				for (int j = 1; j < n; ++j)
				{
					string temp = inp[j];
					if (temp.find(fir[i]) == string::npos)
					{
						for (auto k = result.begin(); k != result.end(); ++k)
						{
							if ((*k) == fir[i])
							{
								result.erase(k);
								break;
							}
						}
					}
				}
			}
			cout<<result.size()<<endl;
		}else{
			cout<<result.size()<<endl;
		}
		
	}
	return 0;
}