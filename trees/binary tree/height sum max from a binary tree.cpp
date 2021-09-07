//Finding   height sum max of a binary tree

#include<iostream>

using namespace std;
class node
{
	public:
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
class BT
{  public:
	 int sum(node *root)
	 {
	    if(root==NULL)
		{
			return 0;
		}	
	 	
	 	int ls=sum(root->left);
	 	int rs=sum(root->right);
	 	int ts=ls+rs+root->data;
	 	
	 	return ts;
	 }
	 
	 bool sum_root_node_util(node *root,int &total,int x)
	 {
	 	if(root==NULL)
	 	{
	 		return false;
		 }
		 total+=root->data;
		 
		 if(root->data==x) return true;
		 
		 if(sum_root_node_util(root->left,total,x) || sum_root_node_util(root->right,total,x))
		    return true;
		    
		    total-=root->data;
		    return false;
	 	
	 	
	 }
	 
	  int sum_root_node(node *root,int x)
	 {
	    if(root==NULL)
		{
			return 0;
		}	
	 	int total=0;
	 	sum_root_node_util(root,total,x);
		 return total; 
	   
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 int maxnode(node *root)
	 {
	    if(root==NULL)
		{
			return 0;
		}	
	 	
	 	int lm=maxnode(root->left);
	 	int rm=maxnode(root->right);
	    int tm=max(root->data,max(lm,rm));
	 	
	 	return tm;
	 }
	
	
	int height(node *root)
	 {
	    if(root==NULL)
		{
			return -1;               //-1 for edges and 0 for nodes;
		}	
	 	
	 	int lh=height(root->left);
	 	int rh=height(root->right);
	 	int th=max(lh,rh);
	 	
	 	return th+1;
	 }
	
	
	void printleveldown(node *root,int k)
	{
		
		if(root==NULL ||k<0)
		{
			return;
		}
		if(k==0)
		{
			cout<<root->data<<" ";
		}
		
		printleveldown(root->left,k-1);
		printleveldown(root->right,k-1);
		
	}
	
	

};


int main()
{
	/*
	                10
	               /     \
	             20        30
	             / \        /    \
	           40   50     60    70
	          / \    / \     / \      /  \ 
	        80  90  100 110  120 130  140 150
	
	*/
	
	node *root=new node(10);
   root->left=new node(20);
   root->right=new node(30);
   root->left->left=new node(40);
   root->left->right=new node(50);
   root->right->left=new node(60);
   root->right->right=new node(70);	
   root->left->left->left=new node(80);
   root->left->left->right=new node(90);
   root->left->right->left=new node(100);
   root->left->right->right=new node(110);
   root->right->left->left=new node(120);
   root->right->left->right=new node(130);
   root->right->right->left=new node(140);
   root->right->right->right=new node(150);	
   root->right->right->right->left=new node(160);	
	
   BT obj;
   cout<<"sum of tree node is :" << obj.sum(root);
   cout<<"\n max of tree  is :" << obj.maxnode(root);	
   cout<<"\n height of tree  is :" << obj.height(root);
   cout<<"\n k level down nodes print in preorder  ";
   obj.printleveldown(root,3);	
	  cout<<"sum of root to given  node is :" << obj.sum_root_node(root,80);
	
	return 0;
}
