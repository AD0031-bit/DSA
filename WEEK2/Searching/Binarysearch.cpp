#include<iostream>
#include<vector>
using namespace std;
//Similar to naive solution but not the binary search
int self1(vector<int>&arr,int x)
{
    int n=arr.size();
    if(x>arr[n/2])
    {
        for(int i=n/2;i<n;i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }

    }
    else if(x<arr[n/2])
    {
        for(int i=0;i<n/2;i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
        
    }
    else if(arr[n/2]==x)
    {
        return n/2;
    }
    return -1;
}
//Binary search logic-From video solution
int binarysearch(vector<int>&arr,int x)
{ int n=arr.size();
int low=0;
int high=n-1;
while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        high=mid-1;
    }
    else 
    {
        low=mid+1;
    }


return -1;


}}
int main()
{
    vector<int>v={10,10};
    int x=10;
    cout<<binarysearch(v,x);
}