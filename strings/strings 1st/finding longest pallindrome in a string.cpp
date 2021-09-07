//  finding all the pallindrome substring in a string O(n^2)

#include<iostream>
#include<string>
using namespace std;

void pallincount(string str)
{
	string pal;
	int count=0;
	
	for(int i=0;i<str.length();i++)                  //when sub string is odd
	{
		for(int j=0;j+i<str.length()&&i-j>=0;j++)
		{
			if(str[i+j]!=str[i-j])
			{
				break;
			}
			else
			
			{ 
			 count++;
				
			}	
			
		}	
		
	}
	
	for(int i=0;i<str.length();i++)                  //when sub string is even
	{
		for(int j=0;j+i+1<str.length()&&i-j>=0;j++)
		{
			if(str[i+j+1]!=str[i-j])
			{
				break;
			}
			else
			
			{  count++;
				
			}
		}	
		
	}
	
	
	   cout<< count-str.length();
	
}

int main()
{  string s;
   /* cout<<"enter a string";
   	cin>>s;*/
   	s="abbaeae";
   	cout<<"finding pallindrome in the string"<<endl;
   	pallincount(s);
	
	
	return 0;
}
