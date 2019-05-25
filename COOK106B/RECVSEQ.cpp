#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int get_second( pair<int, int> i ){ return i.second; }

bool comp(pair<int,int> a , pair<int,int> b)
{
	return (a.second > b.second) ? true : false;
}
int main(int argc, char const *argv[])
{
	int testcase,n;
	cin>>testcase;
	while ( testcase-- ){
		cin >> n;
		int a[n];
		map<int , int > d;
		cin >> a[0];
		for (int i = 1; i < n; ++i)
		{
			cin >> a[i];
			int td = a[i] - a[i-1];
			d[td] += 1 ;
		}
		vector<pair<int,int >> v ( d.begin(), d.end() );
		// transform( d.begin(), d.end(), v.begin(), get_second );
		sort( v.begin(), v.end(),comp );
  		for (int i=0; i<v.size(); i++) {

  			int temp_d = v[i].first;
  			// cout<<"dif as "<<temp_d<<endl;
  			bool found = true;
  			int dif = 0;
  			int first = a[0];
  			int b[n];
  			b[0] = a[0];
  			int j=1;
  			while(j < n ){
  				b[j] = b[j-1] + temp_d;
  				if (b[j] != a[j])
  				{
  					dif++;
  				}
  				if (dif>=2)
  				{
  					found = false;
  					break;
  				}
  				j++;
  			}
  			if (found == false)
  			{
  				dif = 0;
  				found = true;
  				b[n-1] = a[n-1];
  				j = n-2;
  				while ( j >=0){
  					b[j] = b[j+1] - temp_d;
  					if (b[j] != a[j])
  					{
  						dif++;
  					}
  					if (dif>=2)
  					{
  						found = false;
  						break;
  					}
  					j--;
  				}
  			}
  			if (found)
  			{
  				for (int ti = 0; ti < n; ++ti)
  				{
  					cout<<b[ti]<<" ";
  				}
  				cout<<endl;
  				break;
  			}

  		}
	}
	return 0;
}	