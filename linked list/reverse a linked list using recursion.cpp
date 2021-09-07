// reversing a linked list using recursion

#include<iostream>

using namespace std;

class node
{
	public:
		int data;
		node *next;
		
		node(int x)
		{
			data=x;
			next=NULL;
		}
};

class list
{
	public:
		node *insert(node *head)
		{
			cout<<"enter node data"<<endl;
			int x;
			cin>>x;
			node *temp=new node(x);
			if(head==NULL)
			{
				head=temp;
				return temp;
			}
			node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
			
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
	
/*	node * rev(node *curr)
	{
			if(curr==NULL)
		{
			return NULL;
		}
		if(curr->next==NULL)
		{
		   head=curr;
		   return 
		}
				
		
	}
	
	*/
	
	
};




int main()
{
	list l;
	node *head=NULL;
	head=l.insert(head);
	l.insert(head);
	l.insert(head);
	l.insert(head);
	l.disp(head);

	return 0;
}
