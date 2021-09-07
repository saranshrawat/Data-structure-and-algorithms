//Balanced parenthesis and arein correct order   O(n) time and space......
#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Sol
{ stack <char> s;
	public:
		bool balanced(string str)
		{
			for(int i=0;i<str.length();i++)
			{
				
				if(str[i]=='(' || str[i]=='{' || str[i]=='[')
				{
					s.push(str[i]);
					continue;
				}
				 if (s.empty()) 
                     return false; 
				
				else if(str[i]==')' ||str[i]=='}' ||str[i]==']')
				{
					switch(str[i])
					{     
						case ')':   
						
						           if(s.top()=='(')
					              {    s.pop();
							            
							            break;
						            }
						            else return false;
									
						case'}':   if(s.top()=='{')
						          {
						              s.pop();
									  break;	
						           }
						           else return false;
						           
					case ']':    if(s.top()=='[')
					          {
						            s.pop();
						            break;              
					           }
					           else return false;
					           
					}
					
					
				}
				
				
			}
			
			if(s.empty())
			return true;
		}
	
	
	
	
};



int main()
{
	cout<<"enter a parenthesis string";
	string str;
	cin>>str;
	Sol ob;
   if(ob.balanced(str)) 
   cout<<"balanced";
   else cout<<"not balanced";
	return 0;
}
