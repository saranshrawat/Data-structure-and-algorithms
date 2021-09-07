//IMPEMENTING BASIC STRING FUNCTIONS....
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
void rev()
{
	
	
}
void app()
{
	string s1="family";
	string s2=" is above all";
  	s1=s1+s2;
	cout<<s1;
	s1.append(s2);        //appending a string
    cout<<s1;
	cout<<s1[5];
	
}
void del()
{
	string st1="\n hello";                //deltering a string
	st1.clear();
	cout<<st1;
}
void comp()
{
	string s="hello";
	string s1="how are";
	if(!s.compare(s1))                      //check if string are equals
	{
		cout<<"equal";
	}
	else cout<<"not eql";
}

void emp()
{
	string s1="heloo";
	if(!s1.empty());                     //check if a string is empty
	{
		cout<<" not empty";
	}
}
 void erse()
 {
 	string s="bhag jao yaha se";
 	s.erase(4,5);                    // erases 5 next char from 4th place
 	cout<<s;
 	
 }
void sub()
{
	string s=" oh my god ";
	int n=s.find("my");       //returns the  1st index where it finds substring;
	cout<<n;
	s.insert(3,"!");    // places a given string inside a given string
	cout<<s;
//	s.length() and s.size()  both are same and returns an interger variable;

 string s1=s.substr(6,4);      //extracts a substring from a given place upto no of units asssigned
 cout<<s1;
 
 
 string s3="2345";
// int x= stoi(s3);       //cov aa string to int
// cout<<x+2;
 //s3=to_string(x);            // con a int to a string
cout<<s3;
sort(s1.begin(),s1.end()); //sort a string from 1st index to last
}

int main()
{
/*	string hc,ch;
    getline(cin,ch);
	hc=ch;
    int i,low=0;
	int len= ch.size();
	for(i=len;i>=0;i--)
	{  
		cout<<ch[i];
		
	}
	
	cout<<"\n"<<hc;
  */
  app();del();	
	comp();
	emp();
	erse();
	sub();
	return 0;
	
}
