#include<iostream>
using namespace std;
//Time complexity is quadratic ie O(n square)
bool self(int arr[],int n)
{
   
    for(int i=0;i<n;i++)
    {
         int lsum=0;
    int rsum=0;
        for(int j=0;j<i;j++)
        {
            lsum+=arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            rsum+=arr[j];
        }
        if(lsum==rsum)
        {
            return true;
        }

    }
    return false;

    
}
//BAsic idea for this question is traversing through the array and 
// calculating both prefix sum and suffix sum 
//Solution using 2 arrays for prefix sum and suffix sum 
bool self2(int arr[],int n)
{
    int prefix[n];
    int suffix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }
    for(int i=1;i<=n-2;i++)
    {
       if( prefix[i-1]==suffix[i+1])
       {
        return true;
       }
    }
    return false;
}
//Without extra auxillary space 
bool efficient(int arr[],int n)
{
    int rsum=0;
    int lsum=0;
    for(int i=0;i<n;i++)
    {
        rsum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        rsum-=arr[i];
        if(lsum==rsum)
        {
            return true;
        }
        lsum+=arr[i];
    }
    return false;


} 
int main()
{
   int arr[]={4,2,2};
   cout<<efficient(arr,3); 
}
//Homework question of this is 
//Given array check if it can be paritioned into 
//three diff parts with equal sum
