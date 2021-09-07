//merge sort on linked list....
#include<iostream>

using namespace std;

class node{
	public:
		int data;
		node *next;
		
	node(int x)
	{
		data=x;
		next=NULL;
		}	
};
class Linkedlist{
	public:
		node *insert(node *head,int x)
		{
			
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
	
	void disp(node *head)
	{
		if(head==NULL)
		{
			return ;
		}
		 while(head!=NULL)
		{
			cout<<"->"<<head->data;
			head=head->next;
		}
		cout<<"\n========================\n";
	}	
	
	node *midele(node *head,node *tail)
	{
	  node*s=head,*fast=head;
		while(fast!=tail &&fast->next!=tail)
		{
			fast=fast->next->next;
			s=s->next;
			
		}
		return s;
	}


   void mergeLists(node* &head1, node* &head2) {
     node* ll=NULL,*p=NULL;
     
   
    if (head1->data < head2->data) {
         ll=head1;
          head1=head1->next;
    } 
      else {
          ll=head2;
         head2=head2->next;
    }
     
     while(head1!=NULL && head2!=NULL)
     {  
         if(head1->data<=head2->data)
         {
             ll->next=head1;
             head1=head1->next;
             ll=ll->next;
         }
         else {
                ll->next=head2;
                head2=head2->next;
                ll=ll->next;
          
         }
     }
     while(head1!=NULL)
     {
            ll->next=head1;
             head1=head1->next;
             ll=ll->next;
     }
      while(head2!=NULL)
     {
            ll->next=head2;
             head2=head2->next;
             ll=ll->next;
     }
     

}
        


};


int main()
{
	Linkedlist obj;
	node *head1=NULL;
	head1=obj.insert(head1,10);
	obj.insert(head1,15);
	obj.insert(head1,17);
	obj.insert(head1,20);
	obj.insert(head1,25);
  node *tail=obj.insert(head1,26);
		
	obj.disp(head1);
	obj.mergesort(head1,tail);	
	obj.disp(head1);
	
	return 0;
}
