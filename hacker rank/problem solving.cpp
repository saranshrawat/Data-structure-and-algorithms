

#include<vector>
#include<iostream>

using namespace std;


int maxCost(vector<int> cost, vector<string> labels, int dailyCount) 
{
 int sum=0,max_sum=0,count=0,i,n;
 n=labels.size();
 for(i=0;i<n;i++)
     {
         
         sum+=cost[i];
         
         if(count<=dailyCount)
         {
            if(labels[i]=="legal")
           {
             count++;
           } 
         }
         else if(count==dailyCount)
         {
             if(sum>max_sum)
          {
              max_sum=sum;
              sum=0;
          } 
             
         }
        
        
         }
            
     
      return max_sum;
  }




int main()
{
	vector<int>cost;
	vector<string> label;
	int n=5,ele;
	for(i=0;i<n;i++)
	{  cin>>ele;
		cost[i]=ele;
	    
	
	}
	
	
	
	
	
	
	
	return 0;
 } 
