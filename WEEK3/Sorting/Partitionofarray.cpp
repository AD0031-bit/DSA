//Naive partition function for quick sort 
#include<iostream>
#include<vector>
using namespace std;
// self 1-
void self(vector<int>&arr,int p)
{
    vector<int>arr2;
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]<p)
       {
        arr2.push_back(arr[i]);
       }
        
    }
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]==p)
       {
        arr2.push_back(arr[i]);
       }
        
    }
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]>p)
       {
        arr2.push_back(arr[i]);
       }
        
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr2[i]<<" ";
    }


}
int main()
{
   vector<int>v={5,13,6,9,12,11,8};
   self(v,8);

}