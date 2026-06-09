#include<iostream>
#include<vector>
using namespace std;


//VIDEO SOLUTION- use first occurence and last occurence together in this function 
int firstoccur(vector<int>&arr,int x)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else 
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else {
                high=mid-1;
            }
        }
    }

}
int lastoccur(vector<int>&arr,int x)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else 
        {
            if(mid==arr.size()-1||arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else {
                low=mid+1;
            }
        }
    }

}
int countvar(vector<int>&arr,int x)
{
    if(firstoccur(arr,x)==-1)
    {
        cout<<0;
    }
    else {
        int count =(lastoccur(arr,x)-firstoccur(arr,x))+1;
        return count;
    }
}

int main()
{
    vector<int>v={10,10,10,10};
    int x=10;
    cout<<countvar(v,x)<<endl;
 

}