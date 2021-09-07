//subset sum problemm using dp  it is basically kadanes algo;
#include<iostream>
#include<vector>
using namespace std;

int max(int a,int b)
{
	return(a>b)?a:b;
}
void sol(vector<int>arr,int n)
{
	int curr=arr[0];
	int ans=arr[0];
	
	for(int i=1;i<n;i++)
	{
		curr=max(arr[i],arr[i]+curr);
		ans=max(ans,curr);
		
	}
	cout<<ans;
	
	
}





int main()
{
	vector<int> arr;
	int n,ele;
	cout<<"ente raray size:"<<endl;
	cin>>n;
	cout<<"enter the elements of array:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr.push_back(ele);
	}
	
	sol(arr,n);
	
	
	
	
	
	return 0;
}



