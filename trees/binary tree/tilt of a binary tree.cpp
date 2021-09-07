//tilt of  binary tree    and is balanced 


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
	 int sum(node *root,int &tilt)                //here we find sum and return it ...but our main focus is on tilt
	 {
	 	if(root==NULL)
	 	{
	 		return 0;
		}
		
		int ls=sum(root->left,tilt);
		int rs=sum(root->right,tilt);
		tilt+=abs(ls-rs);
	    int ts=ls+rs+root->data;
	  	
		return ts;
	 	
	 }
	
	int tilt(node *root)
	{
		int tilt=0;
	   sum(root,tilt);          //here tilt of wholr tree is updated
		return tilt;
	}
	
	


	int balancedutil(node *root,bool &res)                    //O(N) time space O(1)
	{
		if(root==NULL)
		{
			return 0;
		}
		
		int lh=balancedutil(root->left,res);
		int rh=balancedutil(root->right,res);
		
		
	
		if(abs(lh-rh)>1) 
		     res=false;
	 		
	
        
		int fh=max(lh,rh);
		return fh+1;
			
	}
	
	bool balanced(node *root)
	{
		bool res;
		balancedutil(root,res);
		return res;
		
	}
	
	
	

};


int main()

{
                /*	  10
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
   

  

;	
   	

   BT obj;
   cout<<"tilt of whole tree is :"<<obj.tilt(root);	
cout<<"balanced btree : "<<obj.balanced(root);	
	return 0;
}
