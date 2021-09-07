//level order traversal of a binary searach tree

#include<iostream>
#include<queue>

using namespace std;
class node
{
   public:
   int data;
   node *left,*right;
   	
   node(int x)
   {
   	  data=x;
   	  left=NULL;
   	  right=NULL;
	}	
};


class BST
{    public:
    node *insert(node *&root,int x)
    {  node *temp=NULL;
    	if(root==NULL)
    	{
    		temp=new node(x);
    		root=temp;
    		return temp;
		}
		
		else
		{
			if(root->data>x)
	            insert(root->left,x);
			else
			    insert(root->right,x);
		}
	
	}


  void inorder(node *root)
  {  if(root==NULL) return;
  	  inorder(root->left);
  	  cout<<"->"<<root->data;
  	  inorder(root->right);
  	
  }
  
  void levelorder(node *root)
  {
  	  queue<node *> que;
  	  if(root==NULL)
  	  {
  	  	return ;
	 }
  	que.push(root);
  	while(!que.empty())
  	{
  		node *temp=que.front();
  		cout<<"->"<<temp->data;
  		que.pop();
  		
  		if(temp->left!=NULL)
  		{  que.push(temp->left);
  			
		  }
		  	if(temp->right!=NULL)
  		{
  			que.push(temp->right);
		  }
  		
  }
}
	
};



int main()
{
	
	cout<<"creating a BInary search tree..\n";
	BST obj;
	node *root=NULL;
	root=obj.insert(root,10);
	obj.insert(root,2);
	obj.insert(root,5);
	obj.insert(root,40);
	obj.insert(root,11);
	obj.insert(root,30);
	obj.insert(root,15);
	cout<<"inorder traversal:"<<endl;
	obj.inorder(root);
	cout<<"level order traversal:"<<endl;
	obj.levelorder(root);
	
	
	
	return 0;
}
