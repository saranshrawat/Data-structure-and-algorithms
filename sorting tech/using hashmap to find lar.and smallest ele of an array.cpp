// finding max. and min ele of an array witout using sorting techniques  
//means we have to do very less comaprisions    (try to use hashmaps) 

//its something like count sort


#include<iostream>

#include<map>
using namespace std;

int main()
{ 
 int i,n;
 map<int,int> maps;               //we will store ele as key and index as value 
 cout<<"enter the no. of elements:";
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
 {
   cout<<"\n enter the elements:";
   cin>>arr[i];
   maps[arr[i]]=i;
   
 }
	map<int,int>::iterator it;
	
	it=maps.begin();
	cout<<"smallest element"<<it->first<<" "<<it->second<<endl;                 //gives smallest elemnt of array
	//it=maps.end();
	cout<<"largest element"<<it->first<<" "<<it->second;                        //sholud give largest eelemnt of arrray
	
	
	return 0;
}
