//width of a binary tree//print all nodes from a given distance of a node
#include<iostream>
#include<queue>
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
	 
	   int width(node *root)              // O(n) time and space is O(w) where w is max width
	   {
	   	
	   	
	   	 if (root == NULL)
              return 0;
	   	 queue<node*> q;
	   	 int result=0;
	   	 int count;
	   	
	   	  q.push(root);
	   	 while(!q.empty())
                  {
                  	
                  	count=q.size();
                  	result=max(count,result);
                  	
                  	
            
                  while(count!=0)              //here we pop all elements of current level and insert elemnts of next level till current level is empty
				  {
				     
				    node *temp=q.front();
                  	q.pop();
                  	
                  	
                  	if(temp->left!=NULL)
                  	    q.push(temp->left);
                  	if(temp->right!=NULL)
					     q.push(temp->right);   
						 count--; 
				  	
				  }	
                  	
                  	
				}	   	
	               return result;
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

  		
   BT obj;
   
  cout<<"width of binary tree is : "<<obj.width(root);
	
	
	return 0;
}
