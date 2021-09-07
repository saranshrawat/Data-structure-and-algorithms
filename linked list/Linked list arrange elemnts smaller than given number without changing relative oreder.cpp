//Linked lost O(1) extra space
#include<iostream>

using namespace std;

class node
{
	
	public:
		int data;
		node *next;
	node(int x)
	{
	  this->data=x;
	  this->next=NULL	;
	}	
};



class Linkedlist
{
	public:
	node *insert(node *head)
	{   cout<<"enter node data"<<endl;
			int x;
			cin>>x;
		node *temp=new node(x);
		if(head==NULL)
		{
			head=temp;
			return head;
		}
		else
		{
			node *p=head;
			while(p->next!=NULL)
			{
			     p=p->next;
			}
			
			p->next=temp;
		}
		return head;
	}
	
	
	
	 void disp(node *p)
	{   while(p!=NULL)
      	{
		cout<<p->data<<"->";
		p=p->next;
    	}
		cout<<endl;
    }
	
	
	node *sol(node *head,int num)
	{
		node *small=NULL;
		node *smalltail,*bigtail;
		node *big=NULL;
		
		while(head!=NULL)
		{
			node *curr=head;
			if(head->data<num)
			{
				if(small==NULL)
				{
				  small=head;
				  smalltail=head;
				}
				else
				   {
				   	smalltail->next=head;
				   	smalltail=head;
					}
			}
			
			else
			{
				if(big==NULL)
				{
				  big=head;
				  bigtail=head;
				}
				else
				   {
				   	bigtail->next=head;
				   	bigtail=head;
					}
				
				
				
			}
			
			head=head->next;
			
			delete curr;
			
			
		}
		 if(smalltail->next!=NULL)
		        smalltail->next=NULL;
		   if(bigtail->next!=NULL)
		         bigtail->next=NULL;     
		
		smalltail->next=big;
		
		return small;
		
		
	}
	
	
	
	
	
	
};





int main()
{
    Linkedlist l;
	node *head=NULL,*head2=NULL;
	head=l.insert(head);
	l.insert(head);
	l.insert(head);
	l.insert(head);
	l.insert(head);
	l.insert(head);
	l.insert(head);
	l.disp(head);
	head2=l.sol(head,3);
	l.disp(head2);
	
	return 0;
}
