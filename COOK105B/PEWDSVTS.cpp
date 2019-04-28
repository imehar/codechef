#include <iostream>
#include <algorithm>
using namespace std;

#define lld long long int


int main(int argc, char const *argv[])
{
	int testcase;
	lld n,a,b,x,y,z;
	lld rem_a, rem_b;
	cin>>testcase;
	while(testcase--){
		cin>>n >> a >> b >> x >>y >>z;
		lld c[n];
		rem_a = z-a;
		rem_b = z-b;
		for (lld i = 0; i < n; ++i)
		{
			cin>>c[i];
		}
		lld no_of_days;
		lld temp_day = rem_a /x;
		lld temp_day1 = rem_b/y;
		if (temp_day < temp_day1)
		{
			no_of_days = temp_day;
			if (rem_a %x ==0)
			{
				no_of_days--;
			}
		}else{
			no_of_days = temp_day1;
			if (rem_b % y == 0)
			{
				no_of_days--;
			}
		}
		lld total_piper = a + no_of_days*x;
		lld total_hooli = b + no_of_days*y;
		sort(c,c+n,greater<int>());
		lld i=0;
		lld count = 0;
		while(total_piper < z){
			total_piper += c[i];
			count ++;
			c[i]/=2;
			if (c[i] < c[i+1])
			{
				i++;
			}
			if (i==n)
			{
				i=0;
			}
			if (c[i] == 0)
			{
				bool done = true;
				for (int chk = 0; chk < n; ++chk)
				{
					if (c[chk]!=0)
					{
						done = false;
						break;
					}
				}
				if (done)
				{
					break;
				}
			}
		}
		if (total_piper < z)
		{
			cout<<"RIP"<<endl;
		}else{
			cout<< count <<endl;
		}
		
	}
	return 0;
}