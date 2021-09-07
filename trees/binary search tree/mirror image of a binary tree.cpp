// image of a binary tree;
#include<iostream>

using namespace std;
class node
{
   public:
   int data;
   node *left;
   node * right;	

node (int x)
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
    {
        if(root==NULL)
        {
        	root=new node(x);
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
   
    void inord(node *root)
    {
    	if(root==NULL)
    	{
    		return;
		}
		else
		{
			inord(root->left);
			cout<<root->data<<"\t";
			inord(root->right);
	}	
  }
    
	void mirror(node *root)                            //mirror image of a binary search tree
	{
	   if(root==NULL)
	   {
	   	   return;
	   }
	       mirror(root->left);
	   	   mirror(root->right);
	   	   node *temp=root->left;
	   	   root->left=root->right;
	   	   root->right=temp;
	   	
	}	
    	
   	
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
	obj.inord(root);
	cout<<"mirror tree:"<<endl;
	obj.mirror(root);
	cout<<"displaying items:"<<endl;
	obj.inord(root);
	
}
