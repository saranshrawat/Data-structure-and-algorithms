// removing duplicates from a linked list
#include<iostream>
#include<unordered_map>
using namespace std;

class node
{
	public:
		int x;
		node *next;
	node(int y)
	{   x=y;
		 
		next=NULL;
	}
};

class List
{
	public:
		node *insert(int x,node *head)
		{   node *temp=new node(x);
			if(head==NULL)
			{
				head=temp;
				return head;
			}
			
			node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
			
			return p;
		}
		
		
   void disp(node *head)
   {
            while(head!=NULL)
			{  cout<<"->"<<head->x;
				head=head->next;
				  }  	
			cout<<endl;	  
   }		
   		
		
   node* remdup(node *head1)
   {  node *prev=NULL;
       node*head=head1;
   	unordered_map<int,int>map;
   	while(head!=NULL)
   	{
   	  if(map.count(head->x)>0)
		 {
		 	prev->next=head->next;
		 	delete head;
		 	head=prev;
		 	
		}	
	   else {
	   	map[head->x]++;
         prev=head;
	   }	
	  head=head->next;
	}
   	return head1;
}

  node *remdupsorted(node *head)
  {
  	 
     if(head==NULL)
     {
         return NULL;
     }
    node* p= head;
    while(p->next!=NULL)
    {
        
        if(p->data==p->next->data)
        {
            node *temp =p->next->next;
            p->next=temp;
        }
        else p=p->next;
        
    }
return head;
  }


};






int main()
{
	List l;
	node *head=NULL;
	head=l.insert(1,head);
	l.insert(2,head);
	l.insert(2,head);
	l.insert(3,head);
	l.insert(3,head);
	l.insert(4,head);
	l.insert(4,head);
	l.disp(head);
    head=l.remdup(head);
	l.disp(head);
	return 0;
}

