//removing dup from a linked list           O(n)

//point to remember in C++ head,p,top etc are not automatically NULL by deafault while in c they are NULL by default
#include<iostream>
#include<cstdlib>
#include<unordered_map>

using namespace std;
class Node
{
   public:
   int data;
   Node *next;	
   Node(int x)
   {
   	   data=x;
   	   next=NULL;
   }

};

class list
{   
	public:
		Node *head=NULL;
		void insert()
		{ int x;
		  Node *p; 
		  cout<<"enter a element:"<<endl;
		  cin>>x;
		  Node *temp= new Node(x);
		  if(head==NULL)
		  { 
		  	head=temp;
		  	cout<<"successfully added"<<endl;
		  }
		 else{
		 	p=head;
		 	while(p->next!=NULL)
		 	{
		 		p=p->next;
		    }
		    p->next=temp;
		 	cout<<"successfully added"<<endl;
		 	
		 }	
			
		}
		
		
		void disp()
		{
			Node *p=head;
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				p=p->next;
				
			}
			
			
		}
		
	
	void dispmap(unordered_map<int,int> map)
    {    cout<<"\n";
		for(const auto& x:map)
	{    
		cout<<x.first<<" "<<x.second<<endl;
	}
	
    }
    
    
    void dupl()
	{  Node *p=head;
       unordered_map<int,int> map;
       unordered_map<int,int>:: iterator it;
	   while(p!=NULL)
	   {
	   	 
	   	 if(map.count(p->data)>0)
	   	   map[p->data]+=1;
	   	 else map[p->data]=1; 
		 p=p->next; 
	     
	   }
	   dispmap(map);		
		p=head;
	  int key,count=0;
	  for(it=map.begin();it!=map.end();it++)
	   
	   { 
	     if(count==0)
	     {
	     	continue;
		 }
		 key=it->first;
	     head=head->next;
	     head->data=key;
		 count++;
		 if(count==map.size())
		 {
		    head->next=NULL; 	
		}     	
		head=p;
	   }
	   	 
	   	disp();
	   	
	   }
   

};


int main()
{
     list l;
	 l.insert();
	 l.insert();
	 l.insert();
	 l.insert();
	 l.insert();	
	l.disp();
	l.dupl();
	return 0;
}



