#include<iostream>
using namespace std;
//self try
void self(int arr[],int n)
{
    int t=0;
     int maxnum=arr[0];
      for(int i=0;i<n;i++)
    {

       
        if(maxnum>arr[i])
        {
            t+=maxnum-arr[i];
        }
        
    }
    cout<<t<<" ";

}
//naive solution ->timecomplexity is theta n square 
int naive(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,arr[j]);
         }
          int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,arr[j]);
         }
         res+=(min(lmax,rmax)-arr[i]);
    }
    return res;
}
//Using the video solution 
// We have build an array for both lmax and r max 
//Theta n time complexity and theta n auxillary space also
int getwater(int arr[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }
     rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        res+=(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}
int main()
{
    int arr[]={5,0,6,2,3};
    cout<<getwater(arr,5);
}