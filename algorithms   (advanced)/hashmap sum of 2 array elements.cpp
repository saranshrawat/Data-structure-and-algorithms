// Sum of 2 numbers is equal to fiven sum in an aray                 //O(n) time

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void sum(int *a,int size)
{    int sum,ele;
    cout<<"enter the sum :"<<endl;
    cin>>sum;
	unordered_map<int,int> seen;
	for(int i=0;i<size;i++)
	{ 
	     seen[a[i]]=i;               // entering elemts as key and their index as values 
	 }	                                          
	   for(int i=0;i<size;i++)       
	{  ele= sum-a[i];                    //trying to create another pair by sum-currvalue
	   if(seen.count(ele)>0)              // checking if there is other half of pair in map
	   {
	   	   cout<<"("<<a[i]<<" "<<ele<<")";             //if yes,, then print the pair
	   }
		
	}
	
}
void sumpair(int *a,int size)
{    int sum,tc=0;
    cout<<"enter the sum :"<<endl;
    cin>>sum;
	unordered_map<int,int> seen;
	for(int i=0;i<size;i++)
	{ 
	     seen[a[i]]++;
	    
	 }	                                          //checking if elemnt is already present	
   	for(int i=0;i<size;i++)
	{tc+=seen[sum-a[i]];
	
	   if(sum-a[i]==a[i])
	   {
	   	tc--;
	   }
		
	}
	
	
	cout<< tc/2;
}

int main()
{ int array[]={1,2,4,5,5,6,7};
	sum(array,7);
	sumpair(array,7);
	return 0;
}
