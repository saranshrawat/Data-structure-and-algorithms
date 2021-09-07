//mainpulating a linked list


//implementing a linked list and its features
//       BIG-O(n) for  access and search         O(1) for insertion and deletion at starting  ......
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
  	printf("no memory created \n");
  	exit(0);
}
   temp->next=NULL;
 
  
return temp;                                   //returning address of nodes created
}


void createnode()               //creating  nodes
{   struct node *p,*temp;
    int el,n,i;
	printf("\n enter the numbers of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   temp=creatememory();
	    printf("enter nodes data:\n");
	    scanf("%d",&temp->data);
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
	{  printf(" -> %d ",p->data);            //until p is not null traverse p
		p=p->next;
	}
}


void alter()
{
	int key=0;
	struct node *p=head,*curr=NULL,*prev=NULL;
	prev->data=key;
	while(p->next!=NULL)
	{
		curr->data=p->data;
		p->data=curr->data+prev->data;
		prev->data=curr->data;
		p=p->next;
		
	}
	
}



void main()
{
createnode();
disp();
alter();
disp();
}
