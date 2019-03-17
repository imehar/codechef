#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include <sstream>
#define lld long long int
using namespace std;

int main(int argc, char const *argv[])
{
	int t,d;
	string n;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>d;
		lld i=0;
		std::vector<int> nums;

		for (int i = 0; i < n.length(); ++i)
		{
			string tem (1,n[i]);
			nums.push_back(stoi(tem));
		}
		while(1){
			bool chng = false;
			for (int i = 0; i < nums.size()-1; ++i)
			{
				if ( nums[i] > nums[i+1] )
				{
					nums[i] = 0;
					nums.push_back(d);
					chng = true;
				}
			}
			if (nums[nums.size()-2] > nums[nums.size()-1])
			{
				nums[nums.size()-2] = 0;
				nums.push_back(d);
				chng = true;
			}
			if (nums[nums.size()-1] > d)
			{
				nums[nums.size()-1] = 0;
				nums.push_back(d);
				chng = true;
			}
			nums.erase(remove(nums.begin(), nums.end(),0),nums.end());
			nums.shrink_to_fit();
			if (chng == false)
			{
				break;
			}
		}
		
		lld res =0;
		for (int i = 0; i < nums.size(); ++i)
		{
			// cout<<nums[i]<<" ";
			res = res*10 + nums[i];
		}
		cout<<res<<endl;
	}
	
	return 0;
}