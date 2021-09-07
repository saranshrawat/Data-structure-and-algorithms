//deleting a node in binary tree    and replace with rightmost node in right subtree; 



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
	
	     node *delete_all_leaf(node *&root)                     //just put NULL on nODe whose  left and right are NULL
	     {
	     	if(root==NULL)
	     	{
	     		return NULL;
			 }
	     	if(root->left==NULL && root->right ==NULL)
	     	{
	     		return NULL;
			 }
			
			root->left=delete_all_leaf(root->left);
			root->right=delete_all_leaf(root->right);
			
			return root; 
	     	
	     	
		 }
		 
		  node *delete_all_leaf_of_given_value(node *root,int x)                     //just put NULL on nODe whose  left and right are NULL
	     {
	     	if(root==NULL)
	     	{
	     		return NULL;
			 }
	     	if(root->left==NULL && root->right ==NULL &&root->data==x)
	     	{
	     		return NULL;
			 }
			
			root->left=delete_all_leaf_of_given_value(root->left,x);          //this will put node->eft and node->right NULL whenever there are no left and right nodes
			root->right=delete_all_leaf_of_given_value(root->right,x);
			
			
			/*  if(root->left==NULL && root->right==NULL&&root->val==x) return NULL;       we will check if the current node left and right are null              
			             use this if you have to delete all leaf nodes with target value
			             when any node becomes a leaf.
			          
			          
			          1
			     2       3
			 2        2     4            so this will delete all 2 who will become leaf after their child deletion
		           
		  */
		
			return root; 
	     	
	     	
		 }
		 

	
	

    void disp(node *root)
    {
    	if(root==NULL)
    	{
    		return;
		}
		
		cout<<root->data<<"->";
		disp(root->left);
		disp(root->right);
		
	}
	
	
	

};


int main()

{
                /*	  10
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
   root->right->right->left=new node(80);
   root->right->right->right=new node(150);	
   
   
   
   	node *root2=new node(10);
   root2->left=new node(20);
   root2->right=new node(30);
   root2->left->left=new node(40);
   root2->left->right=new node(50);
   root2->right->left=new node(60);
   root2->right->right=new node(70);	
   root2->left->left->left=new node(80);
   root2->left->left->right=new node(90);
   root2->left->right->left=new node(100);
   root2->left->right->right=new node(110);
   root2->right->left->left=new node(120);
   root2->right->left->right=new node(130);
   root2->right->right->left=new node(80);
   root2->right->right->right=new node(150);	

   BT obj;
   obj.disp(root);
   node *temp;
    temp=obj.delete_all_leaf(root);
   cout<<"\n===========================\n";
   obj.disp(temp);
  
   
   cout<<"\n==================================================================\n";
   obj.disp(root2);
   
   node* root3=obj.delete_all_leaf_of_given_value(root2,80);
     cout<<"\n===========================\n";
   obj.disp(root3);
   
	return 0;
}
