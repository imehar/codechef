#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int testcase,r,c;
	cin>>testcase;
	while ( testcase-- ){
		cin >> r >> c;
		int temp[r][c];
		bool stable = true;
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cin >> temp[i][j];
				int adj = 0;
				if (i-1>=0)
				{
					adj++;
				}
				if (i+1 <r)
				{
					adj++;
				}
				if (j+1<c)
				{
					adj++;
				}
				if (j-1 >=0)
				{
					adj++;
				}
				if (temp[i][j] >= adj)
				{
					stable = false;
				}
			}
		}
		if (stable)
		{
			cout << "Stable\n";
		}else{
			cout << "Unstable\n";
		}
	}
	return 0;
}