//print all path from root to leaf whose sum is between a given numbers....

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
{
   public:
   	    void sol(node *root,string ans,int sum,int low,int high)  //print all paths from root to leaf with given sum between low and high
   	    {
   	    	
		   if(root==NULL)
		   {
		   	return;
		   }
		   if(root->left==NULL && root->right==NULL)
		   {
		   	
		   	 ans= ans + to_string(root->data) + " ";                   
		     sum+=root->data;
		   	if(sum<=high &&sum>=low)
		   	{
		   		cout<<ans<<" ->";
			}
		   	return;
		   }
		    ans= ans + to_string(root->data) + " ";
		    sum+=root->data;
			sol(root->left,ans,sum,low,high);
		    sol(root->right,ans,sum,low,high);
		
		}
		
		
		
		
		void sum(node *root,string ans,int sumval)          //print all path from root to any node with given sum
		{   
		    
			if(root==NULL)
			{
				return;
			}
			if(sumval==root->data)
			{  ans+= to_string(root->data)+" ";
			    sumval-=root->data;
				cout<<ans<<endl;
				return;
			}
			ans+= to_string(root->data)+" ";
			sumval-=root->data;
			sum(root->left,ans,sumval);
			sum(root->right,ans,sumval);		
			
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
	        80  40  30 110  120 130  140 150
	
	*/
	
   node *root=new node(10);
   root->left=new node(20);
   root->right=new node(30);
   root->left->left=new node(40);
   root->left->right=new node(50);
   root->right->left=new node(60);
   root->right->right=new node(70);	
   root->left->left->left=new node(80);
   root->left->left->right=new node(40);
   root->left->right->left=new node(30);
   root->left->right->right=new node(110);
   root->right->left->left=new node(120);
   root->right->left->right=new node(130);
   root->right->right->left=new node(140);
   root->right->right->right=new node(150);	
  		
   BT obj;
   string ans=" ";
   int sum=0;
   obj.sol(root,ans,sum,0,160);
    cout<<"\n============================\n";
    obj.sum(root,ans,110);
	
	
	return 0;
}
