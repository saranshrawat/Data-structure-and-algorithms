// count all Target subset problem
#include<iostream>

using namespace std;

int sol(int arr[],int n,int sum)
{
	int dp[n+1][sum+1];
	  dp[0][0]=1;
	for(int i=1;i<=n;i++)
	   dp[i][0]=1;
	for(int i=1;i<=sum;i++)
	   dp[0][i]=0;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			
			if(arr[i-1]>j)
			  dp[i][j]=dp[i-1][j];
			  
			else
			  dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];  

		}
		
	}
	
 return dp[n][sum];	
}

int main()
{
    int n = 4;
    int a[] = {3,3,3,3};
    int sum = 6;
	cout<<sol(a,n,sum);
	
	
return 0;	
	
}


