// printing differnt patterns...

#include<stdio.h>

void staircase(int n)               // staircase pattern
{
  int i,j;
  for(i=0;i<n;i++)
  {  
      for(j=0;j<n;j++)
  {    if(i+j>=n-1)
       printf("#");
       else printf(" ");
  }
      printf("\n");
  }

}

int main()
{
	
      
   
	
}
