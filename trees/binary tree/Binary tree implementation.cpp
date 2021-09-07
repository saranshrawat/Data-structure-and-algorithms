//implementation of a binary tree

#include<iostream>
#include<string>

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
	void disp(node *node)
	{
		if(node==NULL)
		{
			return;
		}
		string str=" ";
		str+=node->left!=NULL? to_string(node->left->data )+ " " : ".";
		
		str+= " <-" + to_string(node->data) + "->";
		
		str+=node->right!=NULL? to_string(node->right->data )+ " " : ".";
		
		cout<<str<<endl;
		
		disp(node->left);
		disp(node->right);
		
	}
	
	int size1(node *root)
	{   static int count=0;
		if(root==NULL)
		{
		  return 0;
		}
	     	
		size1(root->left);
		{
			++count;
		}
	    size1(root->right);
	    {
	    	++count;
		}
	return count/2;
		
	}

	int size2(node *root)
	{  if(root==NULL)
		{
			return 0;
		}
		int ls=size2(root->left);
		int rs=size2(root->right);
		
		int ts=ls+rs+1;
		return ts;
		
	}


  int leafnode(node *root)
	{  if(root->left==NULL || root->right==NULL)   //here should be and instead of OR 
		{
		 return 1;
		}
		int ls=leafnode(root->left);
		int rs=leafnode(root->right);
		
		int ts=ls+rs;
		return ts;
	}
	
};

int main()
{
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
   obj.disp(root);
   cout<<obj.size1(root)<<endl;
   cout<<obj.size2(root)<<endl;
  cout<<"total leaf nodes : "<< obj.leafnode(root);
   	
	
	
}
