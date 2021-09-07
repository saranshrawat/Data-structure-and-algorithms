#include<iostream>
#include<cstring>                           
using namespace std;


void rev()
{
	string s="hello";
	string s1;
	for(int i=s.size()-1;i>=0;i--)
	{
		s1+=s[i];
	}
	cout<<s1;
}

void palli()
{
	string s1,s2;
	getline(cin,s1);
	for(int i=s1.size()-1;i>=0;i--)
	{
		s2+=s1[i];
	}
	    if(!s1.compare(s2))
	    {
	    	cout<<"strings are pallindrome";
		}
		else cout<<"Not pallindrpme";

}

void rotation()                                                 //string is 
{
	string s1,s2,s3;
	cout<<"enter 1st string \n";
	getline(cin,s1);
	cout<<"enter 2st string \n";
	getline(cin,s2);
	s3=s1+s1;
	if(s3.find(s2)!= string::npos)
	{
		printf("rotation");
	}
	else cout<<"not ";

}


	

int main()
{   // rev();
	// palli();
	// rotation();
	  return 0;
}
