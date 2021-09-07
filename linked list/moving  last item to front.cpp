// Moving last element to front in a linked list
#include<iostream>


using namespace std;

class Node
{public:
  int data;
  Node *next;
  
  Node(int x)
  {
  	data=x;
  	next=NULL;
  }
  	
};

class list
{
	
		public:
		Node *head=NULL;
		void insert()
		{ int x;
		  Node *p; 
		  cout<<"enter a element:"<<endl;
		  cin>>x;
		  Node *temp= new Node(x);
		  if(head==NULL)
		  { 
		  	head=temp;
		  	cout<<"successfully added"<<endl;
		  }
		 else{
		 	p=head;
		 	while(p->next!=NULL)
		 	{
		 		p=p->next;
		    }
		    p->next=temp;
		 	cout<<"successfully added"<<endl;
		 	
		 }	
			
		}
		
		
		void disp()
		{
			Node *p=head;
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				p=p->next;
				
			}
			cout<<"\n";
			
			
		}
		
	
	void move()
	{
		Node *p=head, *temp;
		while(p->next->next!=NULL)
		{
			p=p->next;
		    
		}
		
		temp=p->next;;
		p->next=NULL;
		temp->next=head;
		head=temp;
		
		
	}
	
	void add()
	{
		Node *p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->data+=1;
		
		
	}
	

void rev()
{
     Node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)      //traversing the list
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; // Make last node as head

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}
void add2()
{
	
	
	
	
	
	
	
	
	
}



};




int main()
{
	list l;
	 l.insert();
	 l.insert();
	 l.insert();
	 l.insert();
	 l.insert();	
	 l.disp();
	 l.move(); 
	 l.disp();
	 l.add();
	 l.disp();
	
	
	return 0;
}
