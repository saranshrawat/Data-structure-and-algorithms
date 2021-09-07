// Quick sort O(n log n)  in all cases

#include<iostream>

using namespace std;


void swap(int &a,int &b)
{
int c=a;
	a=b;
	b=c;
}

int partition(int arr[],int pivot,int low ,int high)           //this will divide array such that smaaler elements are on left of pivot and greater are on right
{   int i,j;
         i=low;
         j=low;
	cout<<"\n Welcome to partitioning ..";
   
   while(i<=high)
   {
   	if(arr[i]<=pivot)                     
   	   {
   		 swap(arr[i],arr[j]);
		 i++;
		 j++;		
       }
   	else{
   		i++;
	   }
   	
  }
  cout<<j-1<<"  .";
  return  j-1;
}  

void quicksort(int arr[],int low,int high)
{ 
  if(low>=high)
  {
  	return;
  }
  
   else
   {
   	  int pivot=arr[high];                  //currently selecting last element as pivot
      cout<<"\n pivot is "<<pivot;
      int pivot_index=partition(arr,pivot,low,high);    //dividing the array and getting pivot current index
      quicksort(arr,low,pivot_index-1);                      //sorting the elem smaller than pivot
      quicksort(arr,pivot_index+1,high);                     //sorting the elements greater than pivot
   }
		
}
int main()
{
	int n;
	cout<<"enter array size: ";
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {  cout<<"\n enter the elemetn : ";
    	cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	
	
	
	
	return 0;
}
