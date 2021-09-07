//finding all posisble substrings
#include<iostream>
#include<string>
using namespace std;

class palli
{
	public:
		bool ispall(string s)
		{
			int i=0,j=s.length()-1;
			while(i<=j)
			{
				if(s[i]==s[j])
				{
					i++;j--;
				}
				else return false;
				
			
			}
			return true;
		}
	
	    void substr(string str)
	    {   int max=0;
	         string longest;
	    	for(int i=0;i<str.length();i++)
	    	{
	    		for(int j=i+1;j<str.length();j++)
	    		{
	    			string sub=str.substr(i,j+1);    
	    			if(ispall(sub))
	    			{
	    				if(sub.length()>=max)
	    				{   max=sub.length();
	    					longest=sub;
						}
					}
	    			
	    			
				}
	    		
	    		
			}
			
	    	
	        cout<<"longest pallindromic substring is: "<<longest;	
	    	
	    	
		}	
	
}; 

int main()
{
	string s;
	cout<<"enter a string: ";
	cin>>s;
	palli obj;
	obj.substr(s);
	return 0;
}
