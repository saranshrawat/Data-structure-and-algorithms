//hash table    insert delete ectractO(1)
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
	unordered_map <string,int> ourmap;            //creating an unordered map with object ourmap having key and values;
	
	//inserting values
	
	pair<string,int> p("abc",1);
	ourmap.insert(p);
	
	
	//we can also insert by this method
	ourmap["saransh"]=2;                             // saransh is a key and 2 is value	
    ourmap["saransh1"]=12;
    ourmap["saransh2"]=22;ourmap["saransh3"]=32;

  //Accessing or finding elemnts
  
    cout<<ourmap["abc"]<<endl; 
    
  //we can also accessby at function
  cout<<ourmap.at("saransh")<<endl;
  
  // if we use square brackets for a key which is not present
   cout<<ourmap["ghi"]<<endl ;         // puts a default value with this key
   
   if(ourmap.count("gji"))
    {
    	// this will give 1 or 0   as it tells if there is already a key or not because there cant be 2 keys
	}
 
   
  // finding size
   cout<<ourmap.size();
 
 
   ourmap.erase("ghi");         //deleting a key pair ..we can also pass an iterator here...that will delete current value to which iterator is pointing
   
   
   
   // using  iterators to iterate upon maps   

   unordered_map <string, int>::iterator it =ourmap.begin();    //iterator pointing towards the first key pair;

     while(it!=ourmap.end())
     {
     	cout<<"keys : "<<it->first <<" value : "<<it->second<<endl;
		 
		      	it++;
	 }






return 0;
}
