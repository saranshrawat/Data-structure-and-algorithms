#include<stdio.h>
#include<conio.h>
//finding the max and min elemnets of array//  in big o(n) time complexity
void main()
{
	int arr[20],i,n,min=0,max=0;
	printf("\n enter the size of array \n");
	scanf("%d",&n);
	printf("enter the elemnets of aray \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

     for(i=0;i<n;i++)
     {
         if(arr[i]>arr[i+1])
         {
             max=arr[i];
         }
         else if (arr[i]<arr[i+1])
         {
             max=arr[i+1];
         }
    
     }                  

 for (i= 1; i <n; i++)
   {
        if (arr[i] < arr[min])
         min = i;
         
   }
    min=arr[min];
        
	printf("max element is  %d  min elemnt is  %d",max,min);
	
}
