// finding a number in an array that appers more than n/k times.....hashmap O(n)


#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{    unordered_map<int,int> map;
     int n,i,k;
	 cout<<"enter the size of array:"<<endl;
	 cin>>n;
	 cout<<"enter the k value:"<<endl;
	 cin>>k;
	 int arr[n];
	 for(i=0;i<n;i++)
	 {   cout<<"enter node";
	 	cin>>arr[i];
	 	
	 	if(map.count(arr[i])>0)
		{
			map[arr[i]]+=1;
		}
		else map[arr[i]]=1;
		 }	
	   
	cout<<"Printing elemnets who got repeated more than n/k times"<<endl;
	   unordered_map<int,int> ::iterator it;
	   for(it=map.begin();it!=map.end();it++)
	   {
	   	if(it->second>(n/k))
	   	{
	   		cout<<it->first<<"repeated"<<it->second<<"times"<<endl;
		   }
	   }
	
	
	
	
	return 0;
}
