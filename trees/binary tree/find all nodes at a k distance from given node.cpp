//print all nodes from a given distance of a node
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
{  public:
	 
	  bool pathfind(node *root,int x,vector<node*>&arr)        //to find a node and add its path till root
	  {
	  	if(root==NULL)
	  	{
	  		return false;
		  }
		  
		 if(root->data==x)
		 { arr.push_back(root);
		 	return true;
		  } 
	  	if(pathfind(root->left,x,arr)){
	  	   arr.push_back(root);
		  	return true;
		  }
	  	if(pathfind(root->right,x,arr)) 
	  	{ arr.push_back(root);
	  	return true;
	  		
		  }
	  	
	
	  	return false;
	  }
	
	  void path(node *root,int k, node*block)       //its to print k leveldown..
	  {
	  	
	  	if(root==NULL|| k<0|| root==block)              //blocker condition for roots other than target
	  	{
	  		return;
		}
		if(k==0)
		{
			cout<<root->data<<" ";
		}
		path(root->left,k-1,block);
		path(root->right,k-1,block);  
	  }
	  


	  void kdistance(node *root,vector<node*>arr,int target,int k)
	  {   pathfind(root,target,arr);              //first we find path from root to target so that we  can print values at klevelup
	  	  for(int i=0;i<arr.size();i++)
	  	 {
	  	   	path(arr[i],k-i,i==0?NULL:arr[i-1]);      //this will print values at k level up and when arr[i]==target node it will come to target itself it will print k level down
		 }
	  }
	  /*
	     at arr[0] position we have target itself so there will be no block 
	     
	     
	     when at arr[1] it will block all nodes after target node so that it wont access some other irrelevant node
	  */
	
    


};


int main()
{/*
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
  	
   vector<node *> arr;	
   BT obj;
   
   obj.kdistance(root,arr,10,3);
	
	
	return 0;
}
