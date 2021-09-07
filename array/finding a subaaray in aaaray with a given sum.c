//Given an array of positive no.. Find if there is a subarray (of size at-least one) O(n)tine  O(1)space
#include<stdio.h>

void subar(int n, int arr[])
{
	int i,sum,j;
	printf("\n enter the sum for subarray:");
	scanf("%d",&sum);
	int curr=0,left=0,right=0,f=0;
	
	for(i=0;i<n;i++)
	{
	
		{
		   if(curr<sum)	
	      
	      {
		  	curr = curr+arr[i];
			right++;
	      	
		  }
		  
		  
		  if(curr>sum)
		  {
		     curr=curr-arr[left];
			 left++;	
	      }    
             
		   
		}
		 if(curr==sum)
		 {
		 	printf("\n  ..subarray found...%d to %d",left+1,right);
		 	f=1;
			break;
		 }	    
	}
		
	if(f==0)
	{
		printf("not found");
	}
}
void main()
{
int j,m;
printf("enter the size array:");
scanf("%d",&m);
int arr[m];
printf("\n enter the elemts of array:");

	for(j=0;j<m;j++)
	{
		scanf("%d",&arr[j]);
	}

	 
subar(m,arr);
	
}
