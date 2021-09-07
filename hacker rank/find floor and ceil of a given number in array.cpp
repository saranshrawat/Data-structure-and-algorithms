//find floor and ceil in agiven array...O(n)
//find floor and ceil of a given number in a given sorted array...O(log n)
#include<iostream>

using namespace std;

void floor_ceil(int arr[],int n,int data)
{
	
	int low=0,high=n-1;
	int f=0,c=0;
	
	while(low<=high)
	{
		
		int mid=(low+high)/2;
		if(arr[mid]>data)
		{
			high=mid-1;
			c=arr[mid];
		}
		else if(arr[mid]<data)
		{
			low=mid+1;
			f=arr[mid];
		}
		else
		{
			c=arr[mid];
			f=arr[mid];
			break;
		}
	}
	cout<<"floor and ceil are: "<<f<<"  "<<c;
}

int main()
{ int n;
  cout<<"enter size of array: ";
  cin>>n;
	int *arr=new int[n];
	
cout<<"enter elements of array: ";
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int data;
cout<<"enter a value: ";
cin>>data;

	floor_ceil(arr,n,data);
	
	
	
	return 0;
}
