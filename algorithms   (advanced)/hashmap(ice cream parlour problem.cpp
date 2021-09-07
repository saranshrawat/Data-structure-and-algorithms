//   ice cream parlour problemmmm   uses hash map   O(n) time complexity
#include<iostream>
#include<unordered_map>
using namespace std;



int main()
{   int i,n;
    cout<<"please enter the size of array";
	cin>>n;
	int a[n];
	int money=5;
	for(i=0;i<n;i++)                                   //entering the elemnts of arrray;
	{   printf("\n enter the elements of array ");
		cin>>a[i];
	}
	unordered_map<int,int> map;
	
	for(i=0;i<n;i++)
	{
		map[a[i]]=i; 
		
		
	}   int ele;
	
		for(int i=0;i<n;i++)              
	{  ele= money-a[i];                      //trying to create another pair by sum-currvalue
	   if(map.count(ele)>0)                 // checking if there is other half of pair in map
	   { 
	   	   cout<<"("<<a[i]<<" "<<i<<")";              //if yes,, then print the pair
	       cout<<"("<<ele<<" "<<map[ele]<<")"<<endl;
	   
	   }
		
	}
	
	
	
	return 0;
}
