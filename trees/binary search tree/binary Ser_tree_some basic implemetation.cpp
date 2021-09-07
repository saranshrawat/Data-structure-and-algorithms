//finding a node in binary search tree
#include<iostream>

using namespace std;

class node
{
	public:
		int data;
		node *left;
		node * right;
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
		node* insert(node *&root,int x)
		{
			node* temp=NULL;
			if(root==NULL)
			{
				temp=new node(x);
				root=temp;
				return root;
				
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
		
		bool find(node *root,int x)
		{   
		    if(root->data==x)
		    {
		    	return true;
			}
		 
		  else
		  {
		  	if(root->data>x)
		  	find(root->left,x);
		    else find(root->right,x);
		  
	      }
	  }
	 
	 void inorder(node *root)
	 {
	 	 if(root==NULL) return;
	 	inorder(root->left);
	 	cout<<root->data<<endl;
	 	inorder(root->right);
	 }
	 
	 int height(node *root)
	 { 
	    if(root==NULL)
	    {
	    	return -1;
		}
	    int lefts=height(root->left);
	    int rights=height(root->right);
	    if(lefts>rights)
	    {
	    return lefts+1;	
		}
	 	else return rights+1;
	 }
	 
	 
	 int maxi(node * root)
	 {  int max;
	 	if(root->right==NULL)
	 	{
		   max=root->data;
		   return max;
		 }
	 	else maxi(root->right);
	 	
	 }
	  int min(node * root)
	 {  int mini;
	 	if(root->left==NULL)
	 	{
		   mini=root->data;
		   return mini;
		 }
	 	else min(root->left);
	 	
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
	obj.insert(root,11);
	obj.insert(root,30);
	obj.insert(root,15);
	cout<<"inorder traversal:"<<endl;
	obj.inorder(root);
	if(obj.find(root,10))
	{
		cout<<"element exist";
	}
	else cout<<"not exist";
	cout<<"\n finding height of BST :";
    cout<<obj.height(root);
	
	cout<<"\n max value: ";
	cout<<obj.maxi(root);
	cout<<"\n maini value: ";
	cout<<obj.min(root);
	return 0;
}
