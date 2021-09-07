
//implementing a linked list and its features
//       BIG-O(n) for  access and search O(1) for insertion and deletion  ......
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{   int data;
	struct node *next;
};
struct node *head;



struct node* creatememory()    //creating memory fuction
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));            //creating a func. for nemory allocation of new nodes.
  if (temp==NULL)
  {
  	cout<<"no memory";
  	exit(0);
}
   temp->next=NULL;
 
  
return temp;                                   //returning address of nodes created
}


void createnode()               //creating  nodes
{   struct node *p,*temp;
    int el,n,i;
	cout<<"\n enter the no. of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{   temp=creatememory();
	    cout<<"enter node data \n";
	    cin>>temp->data;
	    if (head==NULL)
          { 
           head=temp;                       //save address of first node in head if head is empty
		  }

        else{
        	 p=head;                  //else traaverse using head and add it to next nodes 
        	 while(p->next!=NULL)
        	 {
        	 	p=p->next;
			 }
		     p->next=temp;
		}
	}
	
	
}
 void disp()                         ///displying  nodes
{
	struct node *p=head;
	while(p!=NULL)
	{    cout<<"->"<<p->data;;            //until p is not null traverse p
		p=p->next;
	}
}


void Loopc()
{   int  s,e,c=1;
     struct node *p=head,*add;
	cout<<"enter the position to be connected start and end:";
	cin>>s>>e;
	while(p!=NULL)
	{   
		p=p->next;
		if(c==s)
		{
			add=p;
		}
		
		if(c==e)
		{
			p->next=add;
			break;
		}
		c+=1;
	}
	cout<<"\n loop created successfully";
	
}


void findl()
{   int sp=0,len=0;
	struct node *fast=head,*slow=head;
	  
	  while(slow!=NULL && fast!=NULL && fast->next!=NULL)
	  {
	  	 fast=fast->next->next;
	  	 slow=slow->next;
	  	 if(fast==slow)
	  	 {
	  	       cout<<"\n loop exists..";
			   slow=head;
			   node *comm=fast;
			   while(slow!=comm && fast!=comm)
			   {  fast=fast->next;
			      slow=slow->next;
				  sp+=1;
				  
			   }
			   
			   cout<<"\n Loop starting pos is at"<<sp;
			   slow=slow->next;
			   while(slow!=fast)
			   {
			   	slow=slow->next;
			   	len++;
			   }
			   
			   	if(slow==fast)
			   	{
			   	   cout<<"\n Loop length is :"<<len;	
			       break;
				}
		 	
		}
	       
	  
	  }
}
	 
//prints a linked list recursively
	
	void recur(node *head)
{   
       if(head==NULL)
       {
          return ;
       }
     
      recur(head->next);
       cout<<head->data; 
}

	
	



int main()
{
createnode();
disp();
Loopc();
findl();
recur(head);
return 0;
}
