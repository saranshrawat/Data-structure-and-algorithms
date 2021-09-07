// Migratory birds problem

#include<iostream>
#include<unordered_map>

using namespace std;



void migbirds()
{   unordered_map<int,int> map;
    unordered_map<int,int>::iterator it;
    
    int  max=0,m,n,ele; 
    cout<<"enter map size"<<endl;
    cin>>n;  
    cout<<"Enter map (elements shold be repeated)"<<endl;
	for(int i=0;i<n;i++)
	{   
     	cout<<"enter the ele.";
    	cin>>ele;
		if(map.count(ele)>0)
		map[ele]+=1;
		
		else
		map[ele]=1;
		
	}
	
	for(it=map.begin();it!=map.end();it++)
	{   
		if(it->second>=max)
		{
			max=it->second;
		}	
		
	}
      int min,count=0;
      
	for(it=map.begin();it!=map.end();it++)
	{
		if(it->second==max)
		{  
		    if(count==0)
		       {
		       	min=it->first;
		       	count++;
			   }
			   
			m=it->first;
			if(m<min)
			{
				min=m;
			}
		}
	}
	
	 cout<<"element: "<<min<<" repeated: "<<max;
}




int main()
{


migbirds();

return 0;
} 
