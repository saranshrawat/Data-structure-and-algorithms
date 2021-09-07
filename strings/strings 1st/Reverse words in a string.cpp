//reverse words in a string
#include<iostream>
#include<string>
using namespace std;


void rev(string &s, string &s1)      //we will use s1 string to store result
{ int i=0,j,n;
  n=s.length();
  
  while(i<n)
  { 
        while(i<n && s[i]==' ')
        i++;
        if(i>=n)
        break;
         j=i+1;
        while(j<n && s[j]!=' ')
        j++;
        string sub=s.substr(i, j-i);
        if(s1.length()==0)
        s1=sub;
        else s1=sub+ " "+s1;
        i=j+1;
  }  
  
    


}

int main()
{
    string s,s1;
	cout<<"enter a string to reverese its words :";
	getline(cin,s);                                               //taking input in string 1
	cout<<"\n After reversing the word of string ";
	rev(s,s1);                                                      //call by reference
    cout<<s1;                                                   //printing new reversed string
	return 0;
}
