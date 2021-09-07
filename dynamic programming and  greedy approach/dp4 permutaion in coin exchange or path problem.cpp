//permutation of coin exchange or path steps problem
#include<iostream>
#include<vector>
using namespace std;


void sol(vector<int>arr,int sum)
{
	
	int dp[sum+1]={};
	dp[0]=1;	
	for(int i=1;i<=sum;i++)
	{
		for(int j=0;j<arr.size();j++)
		
		{
			if(arr[j]<=i)
			{
				dp[i]+=dp[i-arr[j]];
			}
			
			
		}
	}
	cout<<dp[sum];
	
}



int main()
{
	cout<<"enter the size of array:";
	int n,ele,sum;
	cin>>n;
	cout<<"enter max path or value:";
	cin>>sum;
	cout<<"enter elements of array:"<<endl;
	vector<int>arr;

	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr.push_back(ele);
	}
	
	sol(arr,sum);
	
	return 0;
}
