// BInary search trees..
#include<iostream>


using namespace std;

class node
{ public:
  int data;
  node *left;
  node *right;
  
  node(int x)
  {
  	data=x;
  	left=NULL;
  	right=NULL;
  }
	
};

class BST
{  
   private :
   	public:
   		node* insert(node *&root,int x)
   		{   
   		     node *temp=NULL;
   			
   			if(root==NULL)
   			{   temp= new node(x);
   				root=temp;
				return temp;;   				
			}
		  else
		  {
		  	if(root->data>x)
		  	{ 
		  	    insert(root->left,x);	
			  }
		  	else  insert(root->right,x);
		  }
		}
  	
  	 void dispinorder(node * root)
  	 {  
	    if(root==NULL)
   	 {
  	 	return;
	   }
  	     dispinorder(root->left);
  	     cout<<root->data<<endl;
  	     dispinorder(root->right);
  	  
		 	
	 }
    
     void preorder(node *root)
     {
     	  if(root==NULL)
   	 {
  	 	return;
	   }
     	
     	cout<<root->data<<endl;
     	preorder(root->left);
     	preorder(root->right);
     	
	 }
	 
	 void post(node *root)
	 {
	 	if(root==NULL)
	 	{
	 		return;
		 }
		 post(root->left);
		post(root->right);
		cout<<root->data<<endl;
		 
		 
	 }

};

int main()
{
	cout<<"creating a BInary search tree..\n";
	BST obj;
	node *root=NULL;
	root=obj.insert(root,10);
	obj.insert(root,2);
	obj.insert(root,5);
	obj.insert(root,40);
	obj.insert(root,15);
	cout<<"inorder traversal:"<<endl;
	obj.dispinorder(root);
	cout<<"preorder traversal:"<<endl;
	obj.preorder(root);
	cout<<"postorder traversal:"<<endl;
	obj.post(root);
	return 0;
}
