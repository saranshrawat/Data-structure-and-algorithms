//finding if string s2 is permutation of string s1         s1=ab                    s2=cddaccbacc      here we can see ba ..hence yes;

// Anagram means    s=abc    s1=bca       same letters same size but different alignment


// so to find the permutaion we will check if there is an anagram of  s1 in s2.....by using sliding window technique...

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


bool permutation(string s,string s1)
{
	unordered_map<int,int> map1;
	unordered_map<int,int> map2;
	int j;
	for(int i=0;j=0;j<s1.length();i<s.length();j++;i++)
	{
		if(map1.count[s[i]]>0)
		{
			map1[s[i]]+=1;
		}
		else map1[s[i]]+=1;
	}
	
	
	
	
	
}


int main()
{ string s,s1;
    cout<<"enter string 1:"<<endl;
    cin>>s;
    cout<<"enter string 2:"<<endl;
    cin>>s1;
    cout<<"checking if string1 is permutation of string 2... "<<endl;
    bool b=permutation(s,s1);
	
	
	
	
	return 0;
}
