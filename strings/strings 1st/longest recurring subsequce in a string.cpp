//dynamic programming   --- length of longest recurring subsequecne



#include<iostream>
#include<vector>
#include<string>
using namespace std;


void lrs(string s)
{   int n=s.length();
	int arr[n][n]={};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			
		if(s[i-1]==s[j-1] &&i!=j)    //this i!=j only for recurring subseq	
			arr[i][j]=1+ arr[i-1][j-1];
		else
		   arr[i][j]=max(arr[i][j-1],arr[i-1][j]);	
		}
	}
	int len=arr[n][n];
	cout<<len;

	
}

int main()
{
	cout<<"enter a string";
	string s;
	cin>>s;
	lrs(s);
	
	
	return 0;
}

