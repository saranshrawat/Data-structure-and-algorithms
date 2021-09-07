
// printing distinct ele in an sorted arrays
#include<stdio.h>
#include<conio.h>
void sort(int arr[],int n)    //sorting array using insertion sort
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i;j>0&&arr[j-1]>temp;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
		
	}
}

void distele(int array[],int n)
{  int i,j;
   sort(array,n);
   
  for(i = 0; i <n; i++) 
  {       
        for(j = i+1; j <n; j++)
		 {
            if(array[i] == array[j])
			{
               //Duplicate element found 
               break;
            }
        }
         // If j is equal to size, it means we traversed whole  array and didn't found a duplicate of array[i] 
        if(j ==n)
           printf("%d ", array[i]);
    }
	
	}
	
	
void birthdayCakeCandles(int n, int arr[]) {
    
  int i,max,m1=0,count=0;
 for(i=0;i<n-1;i++)
  {
     max=(arr[i]>arr[i+1]?arr[i]:arr[i+1]);
     if(max>m1)
     {
         m1=max;
     }
 }for(i=0;i<n;i++)
 {
     if(m1==arr[i])
     count++;
 }
   
   return count;
}

void gradingStudents(int grades_count, int* grades, int* result_count) {
    
    int i,store=0;
    for(i=0;i<grades_count;i++)
    {
        
       if(grades[i]>33)
       {
        store=grades[i]%5;
        store=5-store;
        if(store<3)
        {
            result_count[i]=grades[i]+store;
        }
        else 
        {
           result_count[i]=grades[i];
        }
        
    }
        else result_count[i]=grades[i];
    
 }
 for(i=0;i<grades_count;i++)
 {
 	printf("%d",result_count[i]);
 }
}

void main()
{   int n,i;
	printf("\n ..enter size for array");
    scanf("%d",&n);
    int arr[n], result_count[n];
	printf("\n enter elemnts of array");
    
	for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
//	distele(arr,n);
//birthdayCakeCandles(n,arr);
	gradingStudents(n, arr,result_count);

}
