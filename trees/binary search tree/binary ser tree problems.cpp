// BInary search tree problems.......
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
	
	void disp(node *root)
	{
		if(root==NULL)
		{
			return;
		}
		disp(root->left);
		cout<<root->data<<"\t";
		disp(root->right);
	}
	
	node * min(node * root)
	 {  
	 	if(root->left==NULL)
	 	{
		   return root->left;
		 }
	 	else min(root->left);
	  }
	





	node *del(node *root,int x)
	{  
	
	   if(root==NULL)
	   {
	   	 return root;
		 } 
	   else if(root->data>x) root->left=del(root->left,x);
	   else if(root->data<x)  root->right=del(root->right,x);
	   
	   else
	   {
	   	  if(root->left==NULL && root->right==NULL)    //delete leaf nodes
	   	  {
	   	  	delete root;
	   	  	root=NULL;
	   	  	
		  }
	   
	      else if(root->left==NULL)      //delte nodes having 1 child only right child
	      {
	      	node *temp=root;
	      	root=root->right;
	      	delete temp;
	      	
		  }
	   
	      else if(root->right==NULL)       //del node with one left child only
	      {
	      	node *temp=root;
	      	root=root->left;
	      	delete temp;
	      	
		  }
		  
		  else{                                //delelte node with 2 childs
		  	 
		  	 node *temp=min(root->right);
		  	 root->data=temp->data;
		  	 root->right=del(root->right,temp->data);
		  	 
		  }
		  
		  
		  
	   	}
  return root;
    }
    
    
    
  /*  void del2(node *root,int x)
    {
    	if(root==NULL)
    	{
    		return;
		}
		if(root->data==x)
		{   
			delete root;
			root=NULL;
		}
		 else if(root->data>x) del2(root->left,x);
	    else if(root->data<x)    del2(root->right,x);
	   
    	
	}*/
	
	
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
	cout<<"displaying items:"<<endl;
	obj.disp(root);
	cout<<"deleting an item enter the item";
	int x;
	cin>>x;
	obj.del(root,x);
	cout<<"after deleting:"<<endl;
	obj.disp(root);
	return 0;
}
