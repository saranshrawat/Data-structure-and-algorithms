//printing left or right view of a BST
#include<iostream>
#include<queue>
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
	
/*	void leftside(node *root, node *temp)
	{   if(root==temp)return;
		if(root==NULL) return;
		else
		{
			cout<<root->data<<"\t";
            left(root->left,temp);
			left(root->right,temp);			
			
		}
		
		
		
	}
*/	
void leftview(node *root)
{  if(root==NULL)return;
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		int n=q.size();
		for(int i=0;i<n;i++)
		
		{
			node *temp=q.front();
			q.pop();
			if(i==0) cout<<temp->data<<"\t";
		
		    if(temp->left!=NULL) q.push(temp->left);
		   if(temp->right!=NULL) q.push(temp->right);
		
		
		}
	
	}
	
	
	
	
}
void rightview(node *root)
{  if(root==NULL)return;
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		int n=q.size();
		for(int i=0;i<n;i++)
		
		{
			node *temp=q.front();
			q.pop();
			if(i==n-1) cout<<temp->data<<"\t";
		
		    if(temp->left!=NULL) q.push(temp->left);
		   if(temp->right!=NULL) q.push(temp->right);
		
		
		}
	
	}
	
	
	
	
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
	cout<<"displaying left side items:"<<endl;
//	obj.leftside(root,temp);
	obj.leftview(root);
	cout<<"\n displaying right side items:"<<endl;
	obj.rightview(root);
return 0;	
}
