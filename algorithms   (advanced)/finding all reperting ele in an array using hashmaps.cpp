//how many times elements of array gets repeated

#include<iostream>
#include<map>
#include<vector>
using namespace std;




int main()
{    
     
    map<int,int> map;
    int n,no;
	cout<<"Enter the number of elements:";
	cin>>n;
	int array[n],i;
    
    
	for(i=0;i<n;i++)
	{  cout<<"\n enter element: "; 
	   cin>>array[i];
    } 
	
	for(i=0;i<n;i++)
	{
		if(map.count(array[i])>0)
		{
			map[array[i]]+=1;
		}
		else map[array[i]]=1;
		
		
	}
	
	
	for(const auto& x:map)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	
	return 0;
}
