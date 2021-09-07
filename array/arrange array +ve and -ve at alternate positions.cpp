//arrange +ve and -ve elements in array at alternate positions;

#include<iostream>

using namespace std;

int count(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
		  count++;
	}
	
return count;	
}

int sol1(int arr[],int n)           // O(n) time and O(n) space;
{
	int pos=count(arr,n);
	int neg=n-pos;
	int pos_arr[pos];
	int neg_arr[neg];
	int c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
		{
			pos_arr[c1]=arr[i];
			c1++;
		}
		
		else{
			neg_arr[c2]=arr[i];
			c2++;
		}
	}
	c1=0;c2=0;
	if(pos>neg)
	{
		for(int i=0;i<2*neg;i++)
		{
			if(i%2==0)
			{
				arr[i]=neg_arr[c1];
				c1++;
			}
			else
			{
				arr[i]=pos_arr[c2];
				c2++;
			}
		}
		for(int i=2*neg;i<n;i++)
		{
		   arr[i]=pos_arr[c1];
		   c1++;	
		}		
	}
	
	
	
		if(pos<neg)
	{
		for(int i=0;i<2*pos;i++)
		{
			if(i%2==0)
			{
				arr[i]=neg_arr[c1];
				c1++;
			}
			else
			{
				arr[i]=pos_arr[c2];
				c2++;
			}
		}
		for(int i=2*pos;i<n;i++)
		{
		   arr[i]=neg_arr[c1];
		   c2++;	
		}		
	}
	

}






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
}

  void reverse(int arr[],int n)
  {
  	int i=0,j=n-1;
  	while(i<j)
  	{
  		swap(arr[i],arr[j]);
  		i++;j--;
  		
	  }
  }



void sol2(int arr[],int n)       //O(n log n)time  and O(1)  space       not passes all testcases....
{
	int pos=count(arr,n);
	int neg=n-pos;
	int c1,c2;
	if(pos<neg)
	{
		bubblesort(arr,n);
		reverse(arr,n);
		 c1=0,c2=pos+1;
	}
	else
	{
		bubblesort(arr,n);
		c1=1,c2=neg+1;
	}
   
if(pos<neg)
{  int limit;
	  if(pos%2==0)
	  {
	    limit=	min(pos,neg)/2;
	  }
	  else  limit=	(min(pos,neg)/2)-1;
	  
	  
		for(int i=0;i<=limit;i++)
    	{
		   swap(arr[c1],arr[c2]);
		   c1+=2;
		   c2+=2;
    	}	
}

else
{     
     int limit;
	  if(neg%2==0)
	  {
	    limit=	min(pos,neg)/2;
	  }
	  else  limit=(min(pos,neg)/2)-1;

    
		for(int i=0;i<=limit;i++)
    	{
		   swap(arr[c1],arr[c2]);
		   c1+=2;
		   c2+=2;
    	}	
}
	
	
}

int main()
{
	int n;
/*	cout<<"enter array size: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}*/
	n=10;
	int arr[n]={-5, -2, 5, 2, -4, 7, 1, 8, 0, -8};
    sol2(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	
	return 0;
}
