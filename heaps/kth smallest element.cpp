//find Kth smallest number in an array.....O(n log k)
#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;
int sol(int arr[],int n,int k)
{
	
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
		pq.push(arr[i]);
		if(pq.size()>k)
		{
			pq.pop();
		}	
	}
		
		return pq.top();
}
int main()
{
	
	int arr[10]={6,4,2,8,1,3,5,9,7,10};
cout<<sol(arr,10,7);
	
	
	
	return 0;
}
