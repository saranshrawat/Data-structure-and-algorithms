//binary search tech................O(log n)
#include<iostream>
using namespace std;

int main()
{
	int n,i,ele;
	
	cout<<"enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n enter the elements :";
	    cin>>arr[i];
	}
	
	cout<<"\n Enter the elemnt you want to find";
	cin>>ele;
	int mid,end,start;
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		
		if(arr[mid]<ele)
		{
			start=mid+1;
		}
		else if(arr[mid]==ele)
		{
			cout<<"ele. found at "<<mid+1<<" position";
		     break;
		}
		
        else end=mid-1;		
		
	}
	
	return 0;
}

