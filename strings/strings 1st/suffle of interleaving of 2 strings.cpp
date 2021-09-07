// finding valid suffle of strings                  time complexity Linear

#include<iostream>
#include<string>


using namespace std;



bool suffle(string s, string s1,string res)
{
	if(s.length()!=s1.length())
	{
		return false;
	}
	
	else
	{   int k=0,j=0,i=0;
		
		while(k!=res.length())
		{
		     if(i<s.length()&& s[i]==res[k])
			 i++;
	         else if(j<s1.length()&& s1[j]==res[k])
	         j++;
	         
		     k++;
		     
		 }
		 return true;
		
	}
	
}

int main()
{
	string s,s1,res;
	cout<<"enter two strings"<<endl;
	cin>>s>>s1;
	cout<<"enter suffled string";
	cin>>res;
   bool r=suffle(s,s1,res);
	if(r==true)
	{
		cout<<"yes...suffled";
	}
	else cout<<"no ....wrong";
	return 0;
}
