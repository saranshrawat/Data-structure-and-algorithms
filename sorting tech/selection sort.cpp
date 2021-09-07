// selection sort O(n square) in all cases.....here we find smallest no in an array and put it on index i;

//  we will find smallest no from i to n using nested loop and put in ith index;
// then i value will increse and we find smallest no from i+1 to n using nested loop and put it in i+1 th index and so on


#include<iostream>

using namespace std;
void swap(int &a,int &b)
{
int c=a;
	a=b;
	b=c;
}
void selectionsort(int arr[],int n)
{
	int min;
	for(int i=0;i<n;i++)
	{	
	   min=arr[i];                          //set arr[i] as minimun element
	for(int j=i;j<n;j++)
	{
	  	if(arr[j]<min)                    //now from j=i to n find smallest number
	  	{
	  	  swap(min,arr[j]);                    //if a new min is found swap both numbers data
		}
	
	}	
	  arr[i]=min;	                   //now put min elem in ith index...
	}
}

int main()
{
	
	int n;
	cout<<"enter size of aray : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	selectionsort(arr,n);
   for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
		
	
	
	
	return 0;
}
