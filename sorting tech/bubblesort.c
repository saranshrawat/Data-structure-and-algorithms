#include<stdio.h>
#include<conio.h>

void bubblesort(int array[],int n)
{  int i,temp,j; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}

for(i=0;i<n;i++)
{
	printf("%d /t",array[i]);
}
}
void main()
{
  int array[20],n,i;
  printf("/n please enter the size of array");
  scanf("%d",&n);
  printf("/n please enter the elements of array");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&array[i]);
  	
  }
  
  printf("after sortimg /n");
  bubblesort(array,n);
	
	
	
}
