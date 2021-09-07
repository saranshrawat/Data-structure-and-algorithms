// MIn path cost using dynamic prog (Graph question)
#include<iostream>

using namespace std;

void sol(int n,int m,int arr[m][n])
{
	int dp[n][m];
	dp[0][0]=arr[0][0];
	
	
	for(int i=1;i<n;i++)
	{
		dp[0][i]=arr[0][i]+dp[0][i-1];
		dp[i][0]=arr[i][0]+dp[i-1][0];
		
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			dp[i][j]=min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j])+arr[i][j];
		}
	}
	
	
	cout<<"cost of shortest path is"<<dp[n-1][n-1];
}


int main()
{
	int n=3,m=3;
	int arr[n][m]={
	                {
	                	1,2,3
					},
					{
	                	2,3,4
					}
					,{
	                	1,1,5
					}
	               };
	               
	sol(n,m,arr);               
	return 0;
}
