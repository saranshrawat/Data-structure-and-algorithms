//lowest common ancestor........ O(N) time and space
       
#include<iostream>
#include<vector>
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
{
   public:
   	
   	bool path(node *root,vector<node*> &arr,int k)
   	{
   	   if(root==NULL)
   	   {
   	   	return 0;
	   }
	   
	   arr.push_back(root);
	   
	   if(root->data==k)
	   {
	   	return true;
	   }
	   
	   if(path(root->left,arr,k) || path (root->right,arr,k)) return true;
	   
	   arr.pop_back();
	   return false;
	   
	   
	}
   	
   	
   	 node* Lca(node *root,int k1,int k2)
   	 {
   	 	 
   	     vector<node*>arr,arr1;
   	     path(root,arr,k1);
   	     path(root,arr1,k2);
		  long unsigned int i;
		  for(i=0; i<arr.size() && i<arr1.size();i++)
		  {
		    if(arr[i]!=arr1[i])
			break;	
		  } 	
   	    return arr[i-1];
	 }
   	

};


int main()
{/*
	                10
	               /     \
	             20        30
	             / \        /    \
	           40   50     60    70
	          / \    / \     / \      /  \ 
	        80  40  30 110  120 130  140 150
	
	*/
	
   node *root=new node(10);
   root->left=new node(20);
   root->right=new node(30);
   root->left->left=new node(40);
   root->left->right=new node(50);
   root->right->left=new node(60);
   root->right->right=new node(70);	
   root->left->left->left=new node(80);
   root->left->left->right=new node(40);
   root->left->right->left=new node(30);
   root->left->right->right=new node(110);
   root->right->left->left=new node(120);
   root->right->left->right=new node(130);
   root->right->right->left=new node(140);
   root->right->right->right=new node(150);	
  		
   BT obj;
  cout<<"finding LCA ";
  node *ans=obj.Lca(root,150,120);
   cout<<ans->data;
	
	return 0;
}
