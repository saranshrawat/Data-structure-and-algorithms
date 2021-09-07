//check if a tree is bst or not

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

/* 1. traverse tree in inorder and store values in an array  .
             ..now check if arr[i]<arr[i+1] 
			     if yes then tree is BST O(N) +space O(n)
		*/	     
			     
void pre(Node *root,vector<int> &arr)            //passes all test cases
   {   if(root==NULL) return ;
       pre(root->left,arr);
       arr.push_back(root->data);
       pre(root->right,arr); 
       
   }

  bool checkBST(Node *root)
   {   
      vector<int>arr;
      pre(root,arr);
      for(int i=1;i<arr.size();i++)
      {
          if(arr[i]<=arr[i-1])
          {
              return false;
          }
      }
         return true;
    
    }
			     
			     
			     
			     
			     
			     
			     
			     
			     
			     
			     
			     
  
 /* 2. check if in a subtree its root node >leftnodeand rootnode<rightnode..
          ..also keep passing max value to among left and min value among right so that it cant be greater than its parent   	
             means every node will return its min from right  max from left
  
  */   
            		
	 	
	 	bool isBST(node *root,int mini=INT_MAX,int maxi=INT_MIN)          // fails 5 test cases..
	 	
	 	{      if(root==NULL)
				{
				  return true;	
				}	
	 		
	 		  if(((root->data)<=mini) &&((root->data)=>maxi))
	 		  {
	 		  	return false;
			  }
	 		
	 		  int min1=root->right->data; 
	 		  int max2=root->left->data;
	 		  
	 		  mini=min(min1,mini);
	 		  maxi=max(maxi,max2);
	 		  
	 		   return isBST(root->left,mini,maxi) && isBST(root->right,mini,maxi);
	
		}
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	
};



int main()
{
/*
	                100
	               /     \
	             50        30
	             / \        /    \
	           40   50     60    70
	          / \    / \     / \      /  \ 
	        30  90  100 110  120 130  140 150
	
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
   	
	cout<<"tree is bST or not "<<obj.isBST(root);
	
	return 0;
}

