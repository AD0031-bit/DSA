#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int x)
{ int n=arr.size();
int low=0;
int ans=-1;
int high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==x)
{
    ans=mid;
    high=mid-1;

}
else if(arr[mid]>x)
{
    high=mid-1;
}
else 
{
    low=mid+1;
}
}
return ans;}
//Video solution for the following problem
int firstoccur(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else {
            if(mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else{
                high=mid-1;
            }
        }

    }

}

int main()
{
    vector<int>v={10,10,10};
    int x=10;
    cout<<binarysearch(v,x);
}
