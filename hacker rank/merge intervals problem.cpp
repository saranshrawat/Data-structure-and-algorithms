//merge intervals.


#include<bits/stdc++.h>
#define n 4
#define m 2
using namespace std;

void sort(int arr[n][m])
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[i][0]>arr[i+1][0])
			{   int temp=arr[i+1][0],temp2=arr[i+1][1];
				arr[i+1][0]=arr[i][0];
				arr[i+1][1]=arr[i][1];
				arr[i][0]=temp;
				arr[i][1]=temp2;
			}
		}
	}
	
}




void mergeintervals(int arr[n][m])
{
   
    sort(arr);
 
    int index = 0; // Stores index of last element
    // in output array (modified arr[])
 
 
    for (int i=1; i<n; i++)
    {
        // If this is not first Interval and overlaps
        // with the previous one
        if (arr[index][1] >=  arr[i][0])
        {
               // Merge previous and current Intervals
            arr[index][1] = max(arr[index][1], arr[i][1]);
            arr[index][0] = min(arr[index][0], arr[i][0]);
        }
        else {
            index++;
             arr[index][1] = arr[i][1];
              arr[index][0] = arr[i][0];
		}   
    }
 	for(int i=0;i<index;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    
}




int main()
{
	cout<<"enter an array";
	int arr[n][m];
	int res[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}	

mergeintervals(arr);

	
	return 0;
}
