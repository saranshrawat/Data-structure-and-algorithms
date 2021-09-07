// implementing a max heap
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>

using namespace std;

class heap
{
   vector<int> heap;
   int l(int parent)
   {
   	 return 2*parent+1;
   }
   int r(int parent)
   {
   	return 2* parent +2;
   }
   int par(int child)
   {
   	return (child-1)/2;
   }
   
   //here we have 2 recursive functions heapify up and down o(log n) complexity
   
   	void heapifyup(int index)               //this is used while enterring a new element to check if it is smaller/greater than its parents 
   	{
   		if(index >=0 && par(index) >= 0 && heap[par(index)] > heap[index])
   		{
   		      int temp=heap[index];
			  heap[index]=heap[par(index)];
			  heap[par(index)]=temp;
			  heapifyup(par(index));	 	
		}
   	
	}
   	void heapifydown(int index)       //this is done after del max/min node to check if some other smaller/large node exist or not 
   	{
   	   int child = l(index);
       int child1 = r(index);
   if (child >= 0 && child1 >= 0 && heap[child] > heap[child1]) 
   {
      child = child1;
   }
   if (child > 0 && heap[index] > heap[child])
    {
      int t = heap[index];
      heap[index] = heap[child];
      heap[child] = t;
      heapifydown(child);
		
	}
 }
	public:
		void insert(int ele)               //inserting element in heap;
		{    
		    heap.push_back(ele);             //will push element in vector array
            heapifyup(heap.size()-1);		 //will heapify the whole array
		}
	
	   
	    void delmin()
	    {   
		    int n=heap.size();
	    	if(n==0)
	    	{
	    		cout<<"heap is empty: "; 
				return;
			}
		else
		{
			heap[0]=heap[n-1];
			          //over writing min element 
		    heap.pop_back();             //removing last element as it willbe redundant
			heapifydown(0);            //again arranging array elemets in min heap order starting from 0 index to last
		    cout<<"Element Deleted"<<endl;
		}
		
	   }
	   
	   
	   int extractmin()
	   {
	   	
	   	if(heap.size()==0)
	   	{
	   		cout<<"heap is empty:"<<endl;
	   		return 0;
		}
	   	return heap.front();
	   }
	
	   
	  void disp()
	  {
	  	  vector <int>::iterator pos = heap.begin();
   cout<<"Heap --> ";
   while (pos != heap.end()) {
      cout<<*pos<<" ";
      pos++;
   }
       cout<<endl;  
	  }  	
};



int main()
{
	heap obj;
	obj.insert(55);
	obj.insert(30);
	obj.insert(35);
	obj.insert(13);
	obj.insert(25);
	obj.insert(11);
	obj.insert(18);
	obj.insert(2);
	obj.disp();
	cout<<"min element is :";
	cout<<obj.extractmin()<<endl;
	obj.delmin();
	obj.disp();
	
	return 0;
}
