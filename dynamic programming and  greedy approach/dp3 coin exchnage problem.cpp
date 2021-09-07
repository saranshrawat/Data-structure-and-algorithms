//coin exchange problem  dp concept
#include<iostream>
#include<vector>

using namespace std;

void sol(vector<int>arr,int sum)
{
	vector<int> dp(sum+1);
	dp[0]=1;
	int i;
	for(i=0;i<arr.size();i++)
	{
		for(int j=arr[i];j<dp.size();j++)
		{
			
			dp[j]+=dp[j-arr[i]];
		}		
	}
	cout<<dp[sum];
	
}
int main()
{
	vector<int> arr;
	cout<<"enter the size of array:"<<endl;
	
	int n,ele;
	cin>>n;
	cout<<"enter the sum: "<<endl;
	int sum;
	cin>>sum;
	cout<<"enter coins";
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr.push_back(ele);
	}
	sol(arr,sum);
	
	
	return 0;
}

