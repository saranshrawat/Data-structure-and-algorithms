//find all subarray with given sum...+ve and -ve no.   O(n) time and space
#include<iostream>
#include<unordered_map>
using namespace std;



int sol(int arr[],int n,int k)
{
	unordered_map<int,int> map;
	map[0]=1;
	int count=0;int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		
		if(map.count(sum-k)>=1)
		{
			int val=map[sum-k];
			count+=val;
			map[sum]++;
			
		}
		else map[sum]++;		
	}
	
return count;
	
}


int main()
{
	int arr[]={ 3,9,-2,4,1,-7,2,6,-5,8,-3,-7,6,2,1};
	 int n = sizeof(arr) / sizeof(arr[0]);
	 int k=5;
	cout<<sol(arr,n,k); 
	return 0;
}
 
