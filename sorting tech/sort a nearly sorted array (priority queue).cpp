//sort a nearly sorted array such that each elemnt can be upto k position from its original pos;

#include<iostream>
#include <bits/stdc++.h>
using namespace std;                                //if we have used directly heap sort or quick sort it would have been O(nlog n)


void sol(int arr[],int n,int k)            //    O(n log K)
{ 
	priority_queue<int> pq;              //by deafult max heap used
 int index = 0;	
	for(int i=0;i<=k;i++)
	{   int ele=-(arr[i]);
		pq.push(ele);
	}
	
	for(int i=k+1;i<n;i++)
	{
	    arr[index++]=-pq.top();
		pq.pop();
		pq.push(-arr[i]);
	}
	while(pq.size()>0)
	{
	  arr[index++] = -pq.top();
		pq.pop();
	}
	
}




void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main()
{
	int n;
	cout<<"enter size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{  cout<<"\n enter the element : ";
		cin>>arr[i];
		
	}
	
	sol(arr,n,3);  printArray(arr,n);
	
	
	
	return 0;
}
