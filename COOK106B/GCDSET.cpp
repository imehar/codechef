#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

#define lld long long int


int main(int argc, char const *argv[])
{
	int testcase;
	cin>>testcase;
  lld l,r,g;
	while ( testcase-- ){
		 cin >> l >> r >> g;
     lld low ,high;
     if (l%g != 0)
     {
        low = (int)(l/g)+1;
     }else{
      low = l/g;
     }
     if (r%g !=0)
     {
       high = (r/g) ;
     }else{
      high = r/g;
     }
     // cout<<"low "<<low<<" high"<<high<<endl;
     lld highestval = high*g;
     lld lowestval = low*g;
     if ( highestval>=l && highestval <=r && lowestval >=l && lowestval<=r)
     {
       cout<<1+(high-low)<<endl;
     }
     else{
      cout<< 0<<endl;
     }
	}
	return 0;
}	