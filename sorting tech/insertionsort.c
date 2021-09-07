#include<stdio.h>
void insertion_sort(int arr[],int n)
{int i,j,temp;
   for( i=1;i<n;i++)
   {
   	for( j=i-1;j>=0;j--)
   	{
   		if(arr[j]>arr[j+1])
   		  {
   		  	 temp=arr[j+1];
   		  	arr[j+1]=arr[j];
   		  	arr[j]=temp;
			 }
			 else break;
	   }
		   }		

}
void main()
{ 
	int size,i;
	printf("enter size of array ");
	scanf("%d",&size);
	int arr[size];
	printf("enter element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,size);
	printf("sorted array is ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}	
}

