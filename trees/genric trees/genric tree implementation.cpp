//implementing a genric tree.........O(N) complexity for all cases..

#include<iostream>
#include<vector>
#include<stack>


using namespace std;


class node
{
	public:
	int data;
	vector <node*> child;
	
	node(int x)
	{
		data=x;
	}
};

class Genric
{  
    public:
	
  node *insert(node *root,int x,stack<node *> &s)
   {
   	
   	  if(x==-1)
   	  {
   	    s.pop();	
	  }
		
	else
	  {
		node *temp=new node(x);
		
		if(s.size())
		{
			s.top()->child.push_back(temp);
		}
		else
		{
			root=temp;
			return root;
		}
		
	    s.push(temp);
	   }	
   }	
	

  void disp(node *root)
  {
  	string str= to_string(root->data) + "->";
  	
  	for(node* i: root->child)
  	{
  	   str+= to_string(i->data) + " ";	
	}
  	
  	cout<<str<<endl;
  	
  	for(node* i:root->child)
  	{
  	  disp(i);	
	  
	}
  	
   } 

};


int main()
{
	Genric gt;
	node *root=NULL;
	stack<node*> s; 
	root=gt.insert(root, 10,s);
	gt.insert(root,20 ,s);
	gt.insert(root,50 ,s);
	gt.insert(root,-1 ,s);
	gt.insert(root,60 ,s);
	gt.insert(root, -1,s);
	gt.insert(root,-1 ,s);
	gt.insert(root,30 ,s);
	gt.insert(root, 70,s);
	gt.insert(root,-1 ,s);
	gt.insert(root,-1 ,s);
	gt.insert(root,40 ,s);
	gt.insert(root, -1,s);
	gt.insert(root, -1,s);
	gt.disp(root);	
}
