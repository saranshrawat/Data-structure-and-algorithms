//printing all the permutations of a string
#include<iostream>
#include<string>

using namespace std;

void permut(string str, string ans)
{   static int i=0;
	if(str.length()==0)
	{  i++;
		cout<<i<<"->"<<ans<<endl;
		return;
	}
	
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		string left=str.substr(0,i);
		string right=str.substr(i+1);
		string rest=left+right;
		permut(rest,ans+ch);
	
	}
	
	
}

int main()
{   cout<<"printing all permutations of a given string:";
     string s="abcd",ans="";
     cout<<s.substr(4);
     cout<<"\t "<<s<<endl;
	permut(s,ans);
	return 0;
}
