//Next permutaion in lexcial order            O(n) time O(1) space
#include<iostream> 
#include<string>

using namespace std;



int search(string s,int start,int end,char data)
{
	
	for(int i=start;i<=end;i++)
	{
		if(s[i]<data)
		 return i-1;		
	}
	return end;
	
}

void swap(char &a, char &b)
{
	char c=a;
	a=b;
	b=c;
}


void reverse(string &str,int start,int end)
{
	while(start<end)
	{
		swap(str[start],str[end]);
		start++;
		end--;
	}
	
}
string nextper(string str)
{

    int i=str.length()-2;
 while(i>=0 && str[i]>=str[i+1])
     i--;
  if(i<0)
     return str;   
    
   int index=search(str,i+1,str.length()-1,str[i]);
   swap(str[index],str[i]);
   reverse(str,i+1,str.length()-1);


return str;
}
	

int main()
{
    string s = { "cba" };
    cout<<nextper(s);
    return 0;
}
