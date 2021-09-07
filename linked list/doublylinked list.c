//implemeting a doubly linked ist


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;                        //creating head node
struct node * creatememory()         //cerating memory funct
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("\n memory not created");
		exit(0);
	}
	temp->next=NULL;                                 //setting next and prev to null
	temp->prev=NULL;
    return temp;
}


void createnode()                              // creating nodes
{  struct node * p,*temp;
int i,n;
printf("\n enter the no. of nodes");          
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the nodes");
temp=creatememory();
scanf("%d",&temp->data);
if (head==NULL)                               //checking if head already exists or not
{
	head=temp;   
}
  else
 {
   p=head;
  while(p->next!=NULL)
  {
  	p=p->next;
  }
p->next=temp;
temp->prev=p;                                   // setting next and prev pointers

}
}
}

void disp()
{
	struct node *p=head;
	while(p!=NULL)
	{
		
		printf("-> %d",p->data);                   //displaying linked list
		p=p->next;
	}
	printf("\n...............\n");
}

void add()
{   int i,pos,data;
	struct node *p=head,*temp;
	printf("\n adding new elements to linked list enter position");
	scanf("%d",&pos);
	printf("\n enter data :");
	temp=creatememory();
	scanf("%d",&temp->data);
	for(i=1;i<pos-1&& p!=NULL;i++)      //moving upto postion prev to new position
	{
		p=p->next;
	}
	temp->prev=p;
	temp->next=p->next;            //attaching new nodes
	p->next->prev=temp;
	p->next=temp;
	disp();
}

void addlast()              //adding element to last position
{
	struct node *temp,*p=head;
	int i,data;
	temp=creatememory();
	printf("\n enter element :");
	scanf("%d",&temp->data);
	for(i=1;p->next!=NULL;i++)             //traversing upto last node
	{
		p=p->next;
	}
	  p->next=temp;                  //connecting new node
	  temp->prev=p;
       disp();
}
 void addfirst()     //adding at first node
{
   struct node *p=head,*temp;
   printf("\n adding to start of list.....enter new node");
   temp=creatememory();
   scanf("%d",&temp->data);
   head->prev=temp;             //setting head prev as temp
   temp->next=head;                  //and temp next =head
   temp->prev=NULL;          // temp prev is null
                        
   head=temp;                //giving head new address
   disp();	
}


void del()            //deleting elmnts from linked list from any position
{
	struct node *p=head,*temp;
	int i,pos;
	printf("\n enter the position of element:");
	scanf("%d",&pos);
	for(i=1;i<pos-1 && p->next!=NULL;i++)
	{
		p=p->next;
	}
	printf("\n....succesfully removed....\n");
	temp=p->next->next;
	p->next->next->prev=p;
	free(p->next);
	p->next=temp;
	disp();
}

void dellast()                //deleting last element 
{
	struct  node *p=head;
	int i;
		for(i=1;p->next!=NULL;i++)
	{
		p=p->next;
	}
	p->prev->next=NULL;                   //making second last elemt null
	free(p);                              //freeing last node
	printf("\n ....last elemnt deleted..\n");
	disp();
	
	
}

void delfirst()                         //deleting first node
{
	struct node *p=head,*temp;
	temp=p->next;
	p->next->prev=NULL;
	free(p);
	head=temp;
	disp();
	
}

void prev()               //printing reversed doubly linked list
{   printf("\n  printing a reversed linked list...");
	struct node *p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	while(p!=head)
	{ printf("-> %d",p->data);
	  p=p->prev;
	}
	printf("->%d",p->data);	
}

void rev()  //reversing a linked list
{
printf("\n ...reversing a linked list...\n");
struct node *p=head,*temp=NULL;
while(p!=NULL)
 { 
  temp=p->prev;
  p->prev=p->next;
  p->next=temp;
  p=p->prev;
 }
 if(temp!=NULL)
head=temp->prev;
}
void main()
{
	createnode();
	disp();
	add();
    addlast();
    addfirst();
    del();
    dellast();
    delfirst();
    prev();
    rev();
    disp();
}
