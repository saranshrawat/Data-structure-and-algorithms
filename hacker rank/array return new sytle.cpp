#include<iostream>

using namespace std;

  void printArray(int arr2[],int size)
{     for (int i = 0; i < size; i++)
      cout << arr2[i] << " ";
}


int * returnarray(int arr[],int size)
{  int *res=new int[size];
   for(int i=0;i<size;i++)
   {
   	res[i]=arr[i];
   }
	return res;
	
}




int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    int *arr2={returnarray(arr,size)};   
    printArray(arr2,size); 
    return 0;
}



