//Path from root to node..
#include<iostream>
#include<vector>
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
    
	bool find(node *root,int x,vector<int>& arr)        //this enter data from root to node
	{  
	   
		if(root==NULL)
		{
			return false;
		}
	    arr.push_back(root->data);	
		if(root->data==x)
		{  
			return true;
		}
		if(find(root->left,x,arr) || find(root->right,x,arr))
		{ return true;}
	     
		
		arr.pop_back();
		return false;		
	}




	bool path(node *root,vector<int> &arr,int k)        //from node to root;
   	{
   	   if(root==NULL)
   	   {
   	   	return 0;
	   }
	   
	   if(root->data==k)
	   {
	   	
	   	arr.push_back(root->data);
	      return 1;
	   }
	   
	   if(path(root->left,arr,k)) 
	   {
	   	arr.push_back(root->data);
	   	return 1;
	   }
	   if(path(root->right,arr,k))
	   {
	   	arr.push_back(root->data);
	   	return 1;
	   }
	   
	   else return 0; 
	   
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
   root->left->left->right=new node(90);
   root->left->right->left=new node(100);
   root->left->right->right=new node(110);
   root->right->left->left=new node(120);
   root->right->left->right=new node(130);
   root->right->right->left=new node(140);
   root->right->right->right=new node(150);	
   root->right->right->right->left=new node(160);	
   vector<int> arr,arr1;	
   BT obj;
   
   int val=obj.find(root,150,arr);
     if (val)
    {
        for (int i=0; i<arr.size(); i++)   
        cout << arr[i] << "->";
        
    }
	
	cout<<"\n===========================\n";
  int val2=obj.path(root,arr1,150);	
	 if (val2)
    {
        for (int i=0; i<arr1.size(); i++)   
        cout << arr1[i] << "->";
        
    }
	return 0;
}
