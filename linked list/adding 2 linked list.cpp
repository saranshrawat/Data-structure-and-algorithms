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

class List
{
    public:
	node * insert(int x,node *&head)
	{ 
	   node *temp=new node(x);
		if(head==NULL)
		{
			head=temp;
			return head;
		}
		else
		{  node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
        }
		return temp;
		
	}
	
    void disp(node *head)
	{ node *p=head;
	  while(p!=NULL)
	  { cout<<p->data<<"->"; 
	  	p=p->next;
	  }  
	  cout<<endl;	
	}	
	
	void reverse(node *&head)
	{   node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
	}
		
		
		
	node * add(node *first, node *second)
	{  
	 node* res = NULL;
     node *temp, *prev = NULL;
    int carry = 0, sum;
 
    // while both lists exist
    while (first != NULL
           || second != NULL) {
     
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
 
        carry =sum/10;
        sum = sum % 10;
        temp = new node(sum);
 
      
        if (res == NULL)
            {
            	res=temp;
            	prev=res;
			}
 
        else
           prev->next=temp;
 
       prev = temp;
       if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
 
    
    return res;
	
	}		
		
	
		
};


int main()
{  List l,li,l3;
	node *head=NULL,*head2=NULL,*head3=NULL;
	head=l.insert(1,head);
	l.insert(2,head);
	l.insert(3,head);
	l.insert(4,head);
	l.insert(5,head);
	l.insert(6,head);
	l.disp(head);
	head2=li.insert(1,head2);
	li.insert(2,head2);
	li.insert(3,head2);
	li.insert(4,head2);
	li.insert(5,head2);
	li.insert(6,head2);
	li.disp(head2);
	l.reverse(head);
	l.disp(head);
	li.reverse(head2);
	li.disp(head2);
	
   head3=l3.add(head,head2);
   l3.reverse(head3);
   l3.disp(head3);
	
	return 0;
}
