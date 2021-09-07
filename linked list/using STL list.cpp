

//linked list using stl 

#include<iostream>
#include<list>


using namespace std;


void show(list<int> li)
{
	list <int> ::iterator it;                    

	for(it=li.begin();it!=li.end();++it)
	{
		cout<<*it<<"\t";                                    //printing elemets of lists
	}
	cout<<endl;
	
}

int main()
{	
	list <int> li={1,2,3,4,5,6,7}; 
	show(li);                              //never use same name for STL class and objects ex..list<int> list
	list <int> ::iterator it;                    
     it=li.begin();                     //returns satrting pointer or head
	
	li.insert(it,100);               // insert given element at specified position
	show(li); 

	it=li.end();
	li.insert(it,20); 
	show(li);    
	
	li.push_back(1000);                 //pushes elements from last position
	show(li); 
	
	int pos,i,ele;
	cout<<"enter an ele";                    
	cin>>ele;
	cout<<"\n enter position:";
	cin>>pos;
	
	for( i=0;i<pos;i++)
	{
		it++;                             //increment iterator till given position
	}
	li.insert(it,ele);                   //insert ele at desired index
	show(li); 
	
	li.remove(7);             // removes any given number from list
	show(li);
	
	
	return 0;
}
