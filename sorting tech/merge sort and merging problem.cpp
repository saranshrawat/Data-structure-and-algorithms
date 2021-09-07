//merge sort  and merging 2 sorted arrays.
  #include<iostream>
using namespace std;


void merge(int arr[],int low,int mid,int high)                     
{  
   
    int n=mid-low+1;
    int m=high-mid;
    int arr1[n],arr2[m];
	 
	for (int i = 0; i < n; i++)
        arr1[i] = arr[low + i];
    for (int j = 0; j < m; j++)
        arr2[j] = arr[mid + 1 + j];
	 
	 int i=0,j=0,k=low;
	  
   while(i<n && j< m)
   {
   	if(arr1[i]<arr2[j])
   	{
   	  	arr[k]=arr2[i];
   	  	i++;
	}
	else { arr[k]=arr2[j]; j++;}
    k++;
   }
 
   while(i<n)
   {
   	arr[k]=arr1[i]; i++;k++;
   }
   
   while(i<n)
   {
   	arr[k]=arr2[i]; j++;k++;
   }
	
}


void mergesort(int arr[],int low,int high)                      //merge sort     O()
{ 
	if(high==low)
	{
	  return;
	}	
   int mid=(low+high)/2;
   mergesort(arr,low,mid);
   mergesort(arr,mid+1,high);
   merge(arr,low,mid,high);	

}

int main()
{   int n,m;
    cout<<"enter size of array"<<endl;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	mergesort(arr1,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<"->";
	}
	
 return 0;	
} 

/*





#include<iostream>
using namespace std;
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
// l is for left index and r is
// right index of the sub-array
// of arr to be sorted 
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
 

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}*/
