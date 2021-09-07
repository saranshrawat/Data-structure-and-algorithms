//Move all the negative elements to one side of the array     
           
		   //complexity BIG O(n)...
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,temp,f=0,b;
	printf("enter the size of array \n");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)                               //creatin an array
	{   printf("\n enter the elemnts of array");
		scanf("%d",&arr[i]);
	}
     
    b=n-1;     
    while(f<=b)            //traversing the array and until halfway from both sides
	{  
	   if(arr[f]>0&&arr[b]<0)               
	   {
	       temp=arr[f];                     //swapping elemnts if both pointers have diff int(pos and neg)
		   arr[f]=arr[b];
		   arr[b]=temp;
		   f++;b--;                                       
       }
     else if(arr[f]<0&&arr[b]<0)           //if both has -ve incremnrt front
      {
      	f++;
	  }
     else if(arr[f]>0&&arr[b]>0)
    {
       b--;	                              //if both have +ve decrement back
	}
 }
for(i=0;i<n;i++)
printf(" \nnew arary is %d",arr[i]);

}
