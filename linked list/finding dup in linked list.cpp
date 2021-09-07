//finding dup in linked list
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

void disp(list<int> li)
{
      list <int> ::iterator it;
      for(it=li.begin();it!=li.end();++it)
      {
      	cout<<*it<<"\t";
	  }
	cout<<endl;
	
}

void dispmap(unordered_map<int,int> map)
{
		for(const auto& x:map)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
}

int main()
{   int i,ele,n;
	list<int> li;
	unordered_map<int,int> map;
	list<int> :: iterator it;
	unordered_map<int,int>:: iterator mp;
	disp(li);
	cout<<"how many elements you want to enter:"<<endl;
	cin>>n;
	cout<<"enter the elements of list"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>ele;
		li.push_back(ele);		
	}
	
	
	
	disp(li);
	
	for(it=li.begin();it!=li.end();++it)
	{
		
		if(map.count(*it)>0)
		{
		    map[*it]+=1;
		}
		else map[*it]=1;
		
	}   int el;
	     n=map.size();
		dispmap(map);
		it=li.begin();
		mp=map.begin();
	
	
	return 0;
}
