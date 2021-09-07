//check if 2 binary trees are identical or not O(n)   and mirror or invert a bianry tree  and symmetric;
#include<iostream>

using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
	node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
		}	
};

class BT{
	public:
		bool identical(node*root1,node*root2)
		{
			if(root1==NULL && root2==NULL)   //when both are NULL return true;
			{
				return true;
			}
			
		if(root1!=NULL && root2!=NULL)      //when both are not null
		 {
			return (root1->data==root2->data &&identical(root1->left,root2->left) && identical(root1->right,root2->right));	 //return true only when all are true;					
		 }
		return false;
	}

   
       void mirror(node *&root)
	   {
		   if(root==NULL)
		   {
		   	  return ;
			   }	
	       mirror(root->left);
	       mirror(root->right);
	       
	       node*temp=root->left;
	       root->left=root->right;
	       root->right=temp;

	   }  
	   
	   
	   bool issymmetricutil(node*root1,node*root2)
	   {
	       if(root1==NULL && root2==NULL)
	          return true;
	          
	        if(root1!=NULL && root2!=NULL) 
			{
				return (issymmetricutil(root1->left,root2->left) && issymmetricutil(root1->right,root2->right));
			  }  
	          return false;
	   }
	   bool issymmetric(node *root)
	   {
	   	  return issymmetricutil(root->left,root->right);
	   }
	   
	   
	   
	   
	   
	   
	   
	   
  void disp(node *root)
  {
  	if(root==NULL)
  	{
  		return ;
	  }
	  	  cout<<root->data<<" ";
	  disp(root->left);

	  disp(root->right);
	  
	  
	  
	  
  }


};
      

int main()
{


/*
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
   
   root2->right->right->right=new node(150);		
	
	BT obj;
	cout<<obj.identical(root,root2);
	cout<<"\n==========================\n";
	obj.disp(root);
	cout<<"\n==========================\n";
	obj.mirror(root);
	obj.disp(root);
	cout<<"\n==========================\n";
	if(obj.issymmetric(root) ) cout<<"tree is symmetric...";
	else cout<<"tree is not symmetric";
	cout<<"\n==========================\n";
		if(obj.issymmetric(root2))  cout<<"tree is symmetric...";
	else cout<<"tree is not symmetric";
	return 0;
}
