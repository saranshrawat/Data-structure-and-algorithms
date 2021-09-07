//intersection  and union of 2 sorted linked list;
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;



int main()
{
	list<int> l,l1;
	unordered_map<int,int> map,map2;
	l.push_back(10);
	l.push_back(11);
	l.push_back(12);
	l.push_back(13);
	l.push_back(14);
	l.push_back(15);	
	
	l1.push_back(10);
	l1.push_back(13);
	l1.push_back(1);
	l1.push_back(6);
	l1.push_back(15);
	
	for(auto i=l.begin();i!=l.end();i++)
	{
		map[*i]++;
	}
	
	for(auto i=l1.begin();i!=l1.end();i++)
	{
	   if(map[*i])
	   {
	      cout<<*i<<"->";	
	   }	
	}
	  cout<<endl;
		for(auto i=l.begin();i!=l.end();i++)
	{
		map2[*i]++;
	}
		for(auto i=l1.begin();i!=l1.end();i++)
	{
		map2[*i]++;
	}
		
	for(auto i=map2.begin();i!=map2.end();i++)
	{
		cout<<"->"<<i->first;
	}
	
	
	
	return 0;
}
