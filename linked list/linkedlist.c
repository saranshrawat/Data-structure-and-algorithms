//implementing a linked list and its features
//       BIG-O(n) for  access and search O(n) for insertion and deletion  ......
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
	printf("\n");
}



void del()                  //deleting a desired node from linked list
{   struct node *p=head,*conn;
    int pos,i;
	printf("\n enter the position of node you want to delete");
    scanf("%d",&pos);

	for(i=1;i<pos-1 && p!=NULL;i++)  //traversing until  deleting node prev pos
	{
	    
		p=p->next;
    }
		conn=p->next->next;                  //storing address of node next to deleted node
		free(p->next);                 //freeing memory of req node
		p->next=conn;                  // putting add. of node next to deleted node in prev nodes pointer
	    printf("......node delted succesfully.....\n"); 	
}
 void dellast()                      //deleting last node of linked list
 {
 	int i;
 	struct node *p=head;
 	
 	while(p->next->next!=NULL)        //traversing upto prev pointer of linked list
 	{
	  p=p->next;
	 }
	printf("\n deleting last node %d \n" ,p->next->data);
	free(p->next);                        //freeing memory of last node
	p->next=NULL;                         //setting new last node to null
 	
 }

void delhead()
{  
	struct node *p=head->next;
	printf("\n deleting first node %d \n",head->data);
	free(head);
	head=p;
		
} 

void add()                  //adding at desired location
{   int i,pos;
    struct node*p=head,*temp;
   	printf(" \n enter the position you want to enter");
	scanf("%d",&pos);
	temp=creatememory();           //having memory for new node
	printf(" \n enter the data ");
	scanf("%d",&temp->data);
	for(i=1;i<pos-1 && p!=NULL;i++)
	{
		p=p->next;                         //traversing upto position 
	}
	temp->next=p->next;                    //setting new node
	p->next=temp;	
}

void addlast(int data) 
{
	struct node *temp,*p=head;
	temp=creatememory();
	temp->data=data;
    while(p->next!=NULL)
    {
    	p=p->next;
	}
   p->next=temp;
}  

void rev()
{
    struct node *prevnode=NULL,*curnode=head,*nextnode;

           if(head==NULL)
           {
           	return ;
		   }
        while(curnode!= NULL)      //traversing the list
        {
        	
        	nextnode=curnode->next;
        	curnode->next=prevnode;
        	prevnode =curnode;
        	curnode=nextnode;
            
        }

        head = prevnode; // Make last node as head

        printf("SUCCESSFULLY REVERSED LIST\n");

}





void main()
{
createnode();
disp();
del();
disp();
dellast();
disp();
delhead();
disp();
add();
disp();
rev();
disp();
addlast(10000);
disp();
}
