//heap basic implementation........
#include<iostream>
#include<vector>

using namespace std;
class minheap{
	vector<int>heap;
	public:
	  void swap(int& a,int &b)
	  {  int c=a;
	      a=b;
	      b=c;
	  }
	
	  void heapifyup(int i)
	  {
	  	
	  	if(i==0) return;

	  	int parent_index=(i-1)/2;
	  	
	  	if(heap[i]<heap[parent_index])
	  	{
	  		swap(heap[i],heap[parent_index]);
	  		heapifyup(parent_index);
	  		
		  }
	  }
	
	  void heapifydown(int pi)
	  {
	  	int mini=pi;
	  	
	  	int left_index=2*pi+1;
	  	int right_index=2*pi+2;
	  	
	  	
	  	if(left_index<heap.size() && heap[left_index]<heap[mini])
	  	   mini=left_index;
	  	   
	  	if(right_index<heap.size() && heap[right_index]<heap[mini])   
	  	   mini=right_index;
	  	   
	  	if(mini!=pi)
		  {
		  	swap(heap[pi],heap[mini]);
		  	heapifydown(mini);
			 }  
	  }

		void insert(int x)
		{
			heap.push_back(x);
			heapifyup(heap.size()-1);
		}
	
	   int peek()
	  {
	  	if(heap.size()==0)
	  	{
	  		cout<<"underflow..empty heap";
		}
		 else
		 	return heap[0];
     }
	
	 int remove()
	 {
	 	if(heap.size()==0)
	  	{
	  		cout<<"underflow..empty heap";
		}
	 	int val=heap[heap.size()-1];
	 	swap(heap[0],val);
	 	val=heap[heap.size()-1];
	 	heap.pop_back();
	 	heapifydown(0);
	 	return val;
	 }
	
	
	
	
	
	
	
};


int main()
{
	minheap obj;
	obj.insert(10);
	obj.insert(11);
	obj.insert(15);
	obj.insert(17);
	obj.insert(9);
	obj.insert(20);
	obj.insert(5);
	cout<<"min ele is: "<<obj.peek();
	obj.remove();
	cout<<"min ele is: "<<obj.peek()<<endl;
	obj.insert(3);
	cout<<"min ele is: "<<obj.peek()<<endl;
	
	
	
	return 0;
}


