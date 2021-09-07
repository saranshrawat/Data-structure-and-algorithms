// lexicographic rank of a string
#include<iostream>
#include<string>

using namespace std;

void lexrank(string str)
{   int n=str.length();
	int arr[26]={};
	long fact[26];
	fact[0]=1;
	fact[1]=1;
	int output=0,smaller;
	
	for(int i=2;i<26;i++)
	{
		fact[i]=i*fact[i-1];
	}
	
	for(int i=0;i<n;i++)
	{
		arr[str[i]-'a']=1;
		
	}
	
	for(int i=0;i<n;i++)
	{
		smaller=0;
		for(int j=0;j<26;j++)
		{
			if(j==str[i]-'a')break;           //if we counter the same string variable than break;
		
			else if(arr[j]==1) 
			    smaller++;          //if smaller one exist
			
		}
		arr[str[i]-'a']=0;
		output+=smaller*fact[n-1-i];      
		
	}
	 cout<<output+1;   
}
int main()
{
	cout<<"we have a string";
	string s="lucknow";
	cout<<s<<"\t finding its lexical rank"<<endl;
	lexrank(s);	
	return 0;
}
