#include<iostream>
using namespace std;
//naive 
int naive (int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        int curr=1;
        for(int j=i;j<n;j++)
        {
            if((arr[j]%2==0&& arr[j-1]%2!=0)||(arr[j-1]%2==0&& arr[j]%2!=0))
        {
            curr++;
        }
        else {
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}}

//self -not the nIaive solution 
//Kadane algorithm
int self(int arr[],int n)
{
    int count=1;
    int res=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0&& arr[i-1]%2!=0)||(arr[i-1]%2==0&& arr[i]%2!=0))
        {
           count++;
           res=(res,count);
        }
        else {
            count=1;
        }
              
    }
    return res;
}
int main()
{
    int arr[]={5,10,20,6,3,8};
    cout<<self(arr,6);
}
