#include<iostream>
#include<string>
#include<map>
using namespace std;



char unique(string s)
{   
   int v,ind,store,arr[26];
   char uni;
   for(int i=0;i<s.length();i++)
   {  v=(int)s[i];
   	  ind=v-97;
	  arr[ind]+=1;    	
   	
   }
	
	for(int i=0;i<s.length();i++)
	{   v=(int)s[i];
	    ind=v-97;
		if(arr[ind]==1)
		{
			store=ind;
		    break;
		}
	}
	store+=97;
    uni=(char)store;
	
	return uni;
}

int main()
{
	string s;
	cout<<"enter a string"<<endl;
	cin>>s;
	char c=unique(s);
	
	cout<<"first unique char is "<<c;
	return 0;
}


