//first unique elemnet in a string



//finding first unique element in a string;
#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout<<"enter a string";
	string s;
	cin>>s;
	int i,index,arr[26];
	for(i=0;i<s.length();i++)
	{
		index=s[i]-97;
		arr[index]+=1;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]==1)
		{
		    char c=(char)i+97;
			cout<<c;
			break;
		}
	}
	
	return 0;
}

