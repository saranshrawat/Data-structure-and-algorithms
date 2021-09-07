//next permutaion in array
#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}


int bsearch(int arr[], int l, int r, int key)
{
    int index = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= key)
            r = mid - 1;
        else {
            l = mid + 1;
            if (index == -1 || arr[index] >= arr[mid])
                index = mid;
        }
    }
    return index;
}


void rev(int arr[],int l,int r)

{
    while (l < r)
        swap(arr[l++],arr[r--]);
}
	

void nextper(int arr[],int n)
{
	
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1])
		{
		  continue;	
		}
	  if(i<0)
	     return;
	  else
	  {
	     int index=bsearch(arr,i+1,n-1,arr[i]); 	
	     swap(arr[i],arr[index]);
	     sort();
	  }	 	
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	int arr[4]={1,0,1,3};
	nextper(arr,4);
	return 0;
}
