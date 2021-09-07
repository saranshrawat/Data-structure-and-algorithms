// max chunks to sort an array part 2 in o(n).......here we have random numbers..

//max chunks to make an array sorted.....part 2   O(n)
#include<iostream>
#include<vector>

using namespace std;


int max_chunks2(vector<int>& arr) {
      int cnt = 1;
      int n = arr.size();
      vector<int> maxOfLeft(n);
      vector<int> minOfRight(n);
      maxOfLeft[0] = arr[0];
      for (int i = 1; i < n; i++)
         maxOfLeft[i] = max(maxOfLeft[i - 1], arr[i]);
       
	     minOfRight[n - 1] = arr[n - 1];
      for (int i = n - 2; i >= 0; i--)
         minOfRight[i] = min(minOfRight[i + 1], arr[i]);
      
	  for (int i = 0; i < n - 1; i++) {
         if (minOfRight[i + 1] >= maxOfLeft[i])
         cnt++;
      }
      return cnt;
   }


int main()
{
	vector<int> arr={30,20,10,40,60,50,75,70};
	cout<<max_chunks2(arr);
	
	
	
	return 0;
}
