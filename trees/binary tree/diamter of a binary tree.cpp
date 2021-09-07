//Diameter of a binary tree it is the longest path between deepest node of left and right subtree.

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
class BT{
	 public:
	 	
	 	 int height(node *root)
	 	 {
	 	 	if(root==NULL)
	 	 	  return -1;
	 	 	  
	 	 	int h1=height(root->left);
			int h2 = height(root->right);   
		    
		    
		  return max(h1,h2)+1;
		  }
		                             /*1. traverse tree in inorder and store values in an array  .
             ..now check if arr[i]<arr[i+1] 
			     if yes then tree is BST O(N) +space O(n)
  
  2. check if in a subtree its root node >leftnodeand rootnode<rightnode..
          ..also keep passing max value to among left and min value among right so that it cant be greater than its parent   	
             means every node will return its min from right  max from left
  
  */   
		
	 	
	 	int diameter(node *root)                     //this is inefficient solution....nested recursive calls for height o(n square)
	 	{
	 		
	 		if(root==NULL)
	 		{
	 			return 0;
			 }
			 
			 
	 		int ld=diameter(root->left);
	 		
			int rd=diameter(root->right);
	 		
			int height_lr= height(root->left)+height(root->right)+2;
		  
		    int dia=max(ld,rd);
		    return max(dia,height_lr);
		
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
 root->right->right->right->right=new node(150);	
  		
   BT obj;
   	
	cout<<"dia meter of tree is"<<obj.diameter(root);
	
	
	
	return 0;
}

