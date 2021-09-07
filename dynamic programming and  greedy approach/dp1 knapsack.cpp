
  
//0-1knap sack problem
#include<iostream>

using namespace std;


int knapsack(int weight[],int value[],int w,int n)
{
	int dp[n+1][w+1]={};
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<w+1;j++)
		{
			if(j>=weight[i-1])          //if i can bat
			{   
		        	int rem= j-weight[i-1];
			
				
					
					if(dp[i-1][rem] + value[i-1]> dp[i-1][j])
					{
						dp[i][j]=dp[i-1][rem]+value[i-1];     //if i bat and ads maximun to value
					}
					
					else  dp[i][j]=dp[i-1][j];       // if i bat but its doesnt give max runs
			}
				else dp[i][j]=dp[i-1][j];           //when i dont get a chance to bat
			}
		}
		return dp[n][w];
	}
	

int main()
{
	int n,w;
	cout<<"enter array size:";
	cin>>n;
	int weight[n],value[n];
	for(int i=0;i<n;i++)
	{  cout<<"weight : ";
		cin>>weight[i];
		cout<<"value : ";
		cin>>value[i];
	}
		cout<<"\n enter weight:";
	    cin>>w;
	cout<<"maximum profit is "<<knapsack(weight,value,w,n);
	
	
	
}












