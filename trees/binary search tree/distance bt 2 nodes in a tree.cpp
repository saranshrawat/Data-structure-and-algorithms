// distance between 2 node in a BST

#include<iostream>

using namespace std;

class node
{
	public:
		int data;
		node *left;
		node* right;
	 node(int x)
	 {
	 	data=x;
	 	left=NULL;
	 	right=NULL;
	 }	
	
};

class BST
{
   public:
   node * insert(node *&root,int x)
   {  node *temp;
   	  if(root==NULL)
   	  {  temp=new node(x);
   	      root=temp;
   	      return temp;
   	  }
   	  
   	  else
   	  {
   	  	if(root->data>x)
   	  	{
   	  		insert(root->left,x);
			 }
		else insert(root->right,x);	 
   	  	
   	   }
   	
   	
	}	
	
    	int find(node *root,int x)
		{ 
		   if (root->data == x)
        return 0;
    else if (root->data > x)
        return 1 + find(root->left, x);
    return 1 + find(root->right, x);	
        }
        
        
	void dis(node * root,int x,int y)
	{
		int a,b;
		a=find(root,x);
		b=find(root,y);
	 	cout<<"distance between nodes is :"<<a+b;    //for diff paths
	 	// for same paths   if b>a then b-a
	}
	
};


int main()
{
	BST obj;
	node *root=NULL;
	
	root=obj.insert(root,20);
	obj.insert(root,15);
	obj.insert(root,30);
	obj.insert(root,17);
	obj.insert(root,13);
	obj.insert(root,28);
	obj.insert(root,35);
	obj.insert(root,10);
	obj.insert(root,40);
    obj.dis(root,13,40);
	return 0;
}
