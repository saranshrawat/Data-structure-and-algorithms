//max difference to left smallest
#include<iostream>
#include<vector>

using namespace std;

int max(int a,int b)
{
	return (a>b)? a:b;
}

int min(int a,int b)
{
	return (a<b)? a:b;
}


void sol(vector<int> arr,int n)
{ cout<<"ok sol"; 
  vector<int>minarr;
   int res=0;
   minarr.push_back(arr[0]);
   cout<<"ok"<<endl;
	for(int i=1;i<n;i++)
	{
		minarr[i]=min(arr[i],minarr[i-1]);
		cout<<i<<"ok"<<endl;
	    res=max((arr[i]-minarr[i]),res);
	
	}
	cout<<"ok"<<endl;
  cout<<"\nresult is :->"<<res;
	
}



int main()
{   vector<int>arr;
    int n,ele;
	cout<<"enter the size of aray:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr.push_back(ele);
		
	}
	cout<<"ok main";
	
	sol(arr,n);
	return 0;
}


