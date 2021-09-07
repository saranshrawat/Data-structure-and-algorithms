//traversal in Binary tree
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
	 void preorder(node *root)
	 {
	 	if(root==NULL)
	 	{
	 		return;
		 }
	 	cout<<root->data<<" ";
	 	preorder(root->left);
	 	preorder(root->right);
	 	
	 }
	 void inorder(node *root)
	 {
	 	if(root==NULL)
	 	{
	 		return;
		 }
	 	
	 	inorder(root->left);
	 	cout<<root->data<<" ";
	 	inorder(root->right);
	 	
	 }
	 void postorder(node *root)
	 {
	 	if(root==NULL)
	 	{
	 		return;
		 }
	 	
	 	postorder(root->left);
	 	postorder(root->right);
	 	cout<<root->data<<" ";
	 	
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
  obj.preorder(root);
  cout<<"\n";
  obj.inorder(root);
  cout<<"\n";
  obj.postorder(root);
	
	
	return 0;
}
