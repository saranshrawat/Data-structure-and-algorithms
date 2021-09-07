//product of all elements of array except itself......O(N)time and space
#include<iostream> 

using namespace std;


int sol(int arr[],int n,int index)
{
	int left_arr[n];
	left_arr[0]=arr[0];
	int right_arr[n];
	right_arr[n-1]=arr[n-1];
	
	int i=1,j=n-2;
	for(int i=1;i<n;i++)
	{
		left_arr[i]=left_arr[i-1]*arr[i];
		right_arr[j]=right_arr[j+1]*arr[j];
		j--;
		
	}
	
	return left_arr[index-1]*right_arr[index+1];
	
}

int main()
{
	cout<<"enter size of array: ";
	int n;
	cin>>n;
	int *arr=new int[n];
		cout<<"enter elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		cout<<"\n enter index for product except itself: ";
	int index;
	cin>>index;
  cout<<"product except itself is "<<sol(arr,n,index);
	return 0;
}
