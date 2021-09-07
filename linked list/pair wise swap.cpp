//pair wise swap in linked list;

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
	
	

node *pairwise(node *head)
 {
 
   node *temp1,*temp2,*temp=NULL;
   temp1=head;
   temp2=temp1->next;
  
  while(temp1->next!=NULL && temp2->next!=NULL)
  {   
     swap(temp1->data,temp2->data);
   

    temp1=temp1->next->next;
    temp2=temp2->next->next; 
  }


return head;
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
    head=l.pairwise(head);
    l.disp(head);
	
	return 0;
}
