//checking if a linked list is npallindrome or not........some BUg 
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
   node * insert(node *head,int x)
   {
      node *temp=NULL,*p;
	  temp=new node(x);
	  if(head==NULL)
	  {
	  	head=temp;
	  	return head;
	 }
	 
	 else
	 {
	 	p=head;
	 	while(p->next!=NULL)
	 	{
	 		p=p->next;		
		 }
		 
		 p->next=temp;
		 
		 }	
   	return temp;
   	
   	
   }
   
   
   
   
   void disp(node *head)
   {
   	
   	
   	while(head!=NULL)
   	{   
   		cout<<"->"<<head->data;
   		head=head->next;
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
   
  int palli(node *head1)
  { 
    node *head2=head1;
  	reverse(head2);
  	disp(head2);
  	while(head1!=NULL && head2!=NULL)
  	{
  		if((head1->data)==(head2->data))
  		{
  			head1=head1->next;
  			head2=head2->next;
	    }
	    
  		else return 0;
  	 }
  	 return 1;
   } 
};



int main()
{
   List l;
   node *head=NULL;
   head=l.insert(head,1);
   	l.insert(head,6);
	l.insert(head,2);
	l.insert(head,1);
	l.disp(head);
    if(l.palli(head)==1)
	{
		cout<<"yea pallindrome";
		}    


	return 0;
}
