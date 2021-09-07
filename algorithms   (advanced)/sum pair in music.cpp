#include<iostream>
#include<vector>
using namespace std;

void summusic(vector<int> arr)
{   int count=0;
    int mod[60]={};
    for(int i=0;i<arr.size();i++)
    {

        mod[arr[i]%60]++;
    }
    int i=1,j=59;
    while(i<j)
    {
        count=count+(mod[i]*mod[j]);

        i++;
        j--;
    }
    count+=(mod[0]*(mod[0]-1)/2)+(mod[30]*(mod[30]-1)/2);

    cout<<count;

}


int main()
{
    vector<int> arr;
    int n,ele;
    cout<<"enter array size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        arr.push_back(ele);

    }
    summusic(arr);
    return 0;
}

