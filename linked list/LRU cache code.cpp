#include<iostream>
#include<unordered_map>
using namespace std;

class node
{
   public:
   
   int data;
   node *next;
   node *prev;
  
  node(int x)
  {
     data=x;
     next=NULL;
     prev=NULL;

 } 	
	
	
};


class Doublylinkedlist
{  int count=0;
   unordered_map<int,node> map;
   unordered_map<int,node>::iterator it;
	public:
		node *LRU(node * &head, int x, node *tail)
		{  
		 
		 node *temp=new node(x); 
			if(head==NULL)
			{
				head=temp;
				tail=head;
				map[x]=temp;
				++count;
			}
			
			else
			{
			    if(count<4)
				{
				   if(map[x])
				   {
				   	 if(head->data==temp->data)
				   	  {
					   hit(head,x,tail);
					   }
				   	
				   }
				   else
				   {
				   	tail.next=temp;
				    tail=temp;
				    map[x]=temp;
				    ++count;
				   }
				
				}
				
				if(count>=4)
				{
				  if(map[x])
				  {
				      if(temp->data==head->data)
				        {  
				           hit(head,x,tail);
						}
				      
				      
				      
				  } 
				  
				  else
				  {
				  	
				  	node *prev=head;
				  	head=head->next;
				  	delete prev;
				  	
				    it=map.begin();
				    map.erase(it);
				    map[x]=temp;
				    
				  }	
				   	
					
				}	
				
				
			}
			
			
		}
		
		void disp()
		{
			
			
			
		}
		
		void hit(node *&head,int x,node *&tail)
		{
			
			node *temp=map[x];
			head=temp->next;
			tail=temp;
			tail.next=NULL;		
		}
		void hitatmid(node *&head,int x,node *&tail)
		{
			
			node *temp=map[x];
			head->=temp->next;
			tail=temp;
			tail.next=NULL;		
		}
		
		
	
};



int main()
{
	Doublylinkedlist l;
	node *head=NULL;
	node *tail=NULL;
	
	cout<<"enter the data elememnts"<<endl;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	l.LRU(head,arr[0],tail);
	
		for(int i=1;i<n;i++)
	{
		l.LRU(head,arr[i],tail);
		
	}

	
	return 0;
}
