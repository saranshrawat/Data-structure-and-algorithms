//longest increasing subsequ in array
#include<iostream>
#include<vector>
using namespace std;


int maxi(int a,int b)
{
	return a>b?a:b;
}
void LIS(vector<int>arr,int n)
{    
	int dp[n]={1};
	dp[0]=1;
	int res,max=0;
	for(int i=0;i<n;i++)
	{  
		for(int j=0;j<i;j++)
		
		{   
			 if(arr[i]>arr[j])
			{
			  if(dp[j]>=max)
		          {
		          	max=dp[j];
		           dp[i]=max+1;
				  }
			}
			
			
		}
	   
	}
	
	
	res=0;
	for(int i=0;i<n;i++)
	{
		res=maxi(res,dp[i]);
	}
	
	cout<<"LIS lrngth is: "<<res;
}


int main()
{    vector<int> arr;
     int n,ele;
     cout<<"enter the size of aray:";
     cin>>n;
     cout<<"\n enter the elemnets:";
     for(int i=0;i<n;i++)
     {
     	cin>>ele;
     	arr.push_back(ele);
	 }
	 LIS(arr,n);

	return 0;
}






