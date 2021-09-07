//finding if an array is subsetof another array
// we will go for this by hashmaps
#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{   int i,n,n1;
    cout<<" enter the size of both arrays(n>n1): ";
    cin>>n>>n1;
    int arr[n],arr1[n1];
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	  for(i=0;i<n1;i++)
    {
    	cin>>arr1[i];
	}
	
	unordered_map <int,int> map;
	 for(i=0;i<n;i++)
	 {
	 	map[arr[i]]=arr[i];
	 	
	 }
	 for(i=0;i<n1;i++)
	 {
	 	if(arr1[i]==map[arr1[i]])
	 	{    if(i==n1-1)
	 	    {  cout<<"yes..its a subset";
		    }
	         continue;
		}
		else 
		{ cout<<"not subset";
		  break;
		}
	 }
	
	
	
	
	
	return 0;
}
