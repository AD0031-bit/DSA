#include<iostream>
#include<vector>
using namespace std;
//naive solution of this problem is traversing the array from right sideand taking the max element as the array is sorted 
int self1(vector<int>&arr, int x)
{
    int low=0;
    int high=arr.size()-1;
    
    while(low<=high)
    {
        int mid =(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
       { low=mid+1;}
       else 
       {
        if(mid==arr.size()-1||(arr[mid]!=arr[mid+1]))
        {
            return mid;
        }
        else 
        {
            low=mid+1;
        }

       }

    }
    return -1;
    
}
int main()
{
    vector<int>v={10,15,20,20,40,40};
    int x=40;
    cout<<self1(v,x);
}