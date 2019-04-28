#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int testcase,n;
	cin>>testcase;
	while(testcase--){
		cin>>n;
		int a[n][n];
		int row[n] ;
		int col[n] ;
		for (int i = 0; i < n; ++i)
		{
			row[i] = 0;
			col[i] = 0;
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];
				if (a[i][j]==0)
				{
					row[i] = 1;
					col[j] = 1;
				}
			}
		}
		bool canbe = true;
		for (int i = 0; i < n; ++i)
		{
			if (row[i]==0 || col[i] == 0)
			{
				canbe = false;
			}
		}
		if (canbe)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}