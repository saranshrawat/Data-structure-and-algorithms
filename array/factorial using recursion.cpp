// finding factorial of a number using recursive appreoach


#include<iostream>
using namespace std;

int fact(int n)
{   long int fac=1;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return fac;
	}
	else{
		fac=n*fact(n-1);
	   }
	
	
	
	
}

int main()
{ int n;
	cout<<"enter a number:";
	cin>>n;
	long int i=fact(n);
	cout<<"\n factorial of given no is. "<<i;
	return 0;
}
