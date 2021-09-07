//given an array consisting of only 0.1.2 sort the array without using any sorting tech..in O(N) time comp
 //counting all 0,1,2 and then overwriting array by 0,1,2

#include<iostream>
using namespace std;

void sorty(int arr[], int n)
{
	int c=0,c1=0,c2=0,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			c++;
		}
		
		if(arr[i]==1)
		{
			c1++;
		}
		if(arr[i]==2)
		{
			c2++;
		}
		
    }
	for(i=0;i<n;i++)
	{
		if(i<c)
		{
			arr[i]=0;
		}
		if(i>=c&&i<c1+c)
		{
			arr[i]=1;
		}
		if(i>=c1+c&&i<c2+c1+c)
		{
			arr[i]=2;
		}		
		
	}
}

int main()
{
	int n,i;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"\n enter the elemnts of array ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"\n list after being sorted is :";
	sorty(arr,n);	
    for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

	return 0;

}
