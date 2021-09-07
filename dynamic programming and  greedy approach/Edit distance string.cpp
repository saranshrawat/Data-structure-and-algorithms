//Edit distance INSERT REMOVE REPLACE  

#include<iostream>
#include<string>
using namespace std;


int sol(string s1,string s2)             //dynamic prog O(n square)
{
	int n=s1.size();
	int m=s2.size();
	
	int dp[n+1][m+1];
	dp[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=i;
	}
		for(int i=1;i<=m;i++)
	{
		dp[0][m]=i;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s1[i]==s2[j])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
				
			}
	
		}
		
	}
	return dp[n][m];
		
}


int recur_sol(string s1,string s2,int n,int m)         //recursive approach O(3^n) exponential
{  
	if(m==0 || n==0)
	{
		return 0;
	}
	
	
	  	
	  if(s1[n-1]==s2[m-1])
	  {  
	
	  	return recur_sol(s1,s2,n-1,m-1);
	  
	  }	
	 return 1+ min(recur_sol(s1,s2,m-1,n-1),min(recur_sol(s1,s2,n-1,m
	 ),recur_sol(s1,s2,n,m-1)));
	  	
	
	  	

}











int main()
{
	cout<<"enter string 1";
	string s1,s2;
	cin>>s1;
	cout<<"\n enter string 2";
	cin>>s2;
	cout<<"total min changes req are : "<<sol(s1,s2);
	cout<<"\n total min changes req are recurive sol : "<<recur_sol(s1,s2,s1.length(),s2.length());
	
	
	return 0;
}



