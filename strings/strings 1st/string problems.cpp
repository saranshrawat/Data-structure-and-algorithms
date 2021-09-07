// strings problems 
#include<iostream>
//#include<bits/stdc++.h> 
#include<unordered_map>
#include<string>
using namespace std;


/*void words(string s1)
{  string word;
   // making a string stream 
    stringstream iss(s1); 
  // Read and print each word. 
    while (iss >> word) 
        cout << word << endl; 
} 	
		
			
void searchword(string s1)
{
	
	
	
	
}
*/

void anagram(string s1)     
{  string s;
    int count=0;
	char c;
	unordered_map<char,int> map1;
	unordered_map<char,int> map2;
	cout<<"enter string 2";
	cin>>s;	
	for(int i=0;i<s.length();i++)
	{
		if(map1.count(s1[i])>0)
		{
			map1[s1[i]]+=1;
		}
		else map1[s1[i]]=1;
	
	if(map2.count(s[i])>0)
		{
			map2[s[i]]+=1;
		}
		else map2[s[i]]=1;
	
	}
	
    for(int i=0;i<map1.size();i++)
    
    {
    	c=s[i];
    	if(map1[c]==map2[c])
    	{
    		count=1;
		}
        else count=0;
	}
	
    if(count==1)
    {
    	cout<<"anagram";
	}
   	else cout<<"not";
		
}


int main()
{
   string s1;
   cout<<"enter a string: "<<endl;
   getline(cin,s1);
   //words(s1);
   //searchword(s1)
   anagram(s1);	
	return 0;
}
