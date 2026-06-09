#include<iostream>
#include<vector>
using namespace std;
int self1(vector<int>&arr,int x,int low,int high)
{ 
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    else if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return self1(arr,x,low,mid-1);
    }
    else {
        return self1(arr,x,mid+1,high);

    }
}
int main()
{
    vector<int>v={10,15,20};
    int x=15;
    cout<<self1(v,x,0,v.size()-1);
}