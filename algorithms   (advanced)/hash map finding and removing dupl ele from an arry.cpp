//removing duplicates elemts of array
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int>removedup(int *a, int size)
{
   vector<int>output;    //creatin a vector array(dynamic)
   unordered_map<int,bool> seen;  
 //here we will take key as elemnt from array and value as true or false

   
   for(int i=0;i<size;i++)
   {
   	 if(seen.count(a[i])>0)            //checking if elemnt is already present
   	 {
   	   continue;	
	 }
       seen[a[i]]=true;               //if not already present mark it true
       output.push_back(a[i]);        //adding element to array
   
   }	
	
	return output;
	
}





int main()
{
	int a[]={1,2,3,1,2,5,6,7,5,3,8,9,5};
	vector<int>output=removedup(a,13);
	for(int i=0;i<output.size();i++)
	{
		cout<<output[i]<<endl;
	}

return 0;
}
