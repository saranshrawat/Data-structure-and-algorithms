/*Q 1. Given N and N elements Find the number of distinct sums. For example:
3
1, 2, 3
Possible sums of all subarrays: 1, 2, 3, 3, 5, 6. Return Value: 5 (Distinct sums are: 1, 2, 3, 5, 6)
*/


#include<iostream>
#include<vector>
#include<set>
using namespace std;


vector<int> find_distinct_sum(int arr[],int n)
{   set<int>map;
     unordered_map<int,int>::iterator it;
     vector<int>res;	
	for(int i=0;i<n;i++)
	{ int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];
			if(map.count(sum)<1)
			{
				map[sum]=1;
			}
			
	    }
	}
  for (it=map.begin();it!=map.end();it++)
        res.push_back(it->first);
	
	return res;
}


int main()
{
	int n;
	cout<<"Enter aaray size :";
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

 vector<int>res=find_distinct_sum(arr,n);		
	
	for(int i=0;i<res.size();i++)
	{
	cout<<res[i]<<" ";
	}
		
	
	
	
}
