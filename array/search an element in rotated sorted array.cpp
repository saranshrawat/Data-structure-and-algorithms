//search an element in rotated sorted array with unknown pivot..
#include<iostream>

using namespace std;

bool binarysearch(int arr[],int low,int high,int ele)
{int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
	  	if(arr[mid]==ele)
		{
			return true;
		}
		
		else if(ele<arr[mid])
		{
			high=mid-1;
		}
		else low=mid+1;		
	}
	
	return false;
	
}




int pivot(int arr[],int n)
{	
	int lo=0;
	int hi=n-1;
	
	while(lo<hi)
	{
		
		int mid=(lo+hi)/2;
		if(arr[mid]<arr[hi])
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
		
		
	}
	return hi;
}


bool sol(int arr[],int n,int ele)
{
	int pi=pivot(arr,n);
	bool res1,res2;
   res1=binarysearch(arr,0,pi-1,ele);
   res2=binarysearch(arr,pi,n-1,ele);
   
   
   return(res1|| res2);
	
}


int main()
{
	int arr[10]={7,8,9,10,1,2,3,4,5,6};
	int ele=31;
   if(sol(arr,10,ele))
      cout<<"element found";
    else cout<<"not present";  
	
	return 0;
}
