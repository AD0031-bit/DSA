#include<iostream>
using namespace std;
//self 
//naive solution pic in notes 
int  self(int arr[],int n)
{int count =0;
int index=0;
int p=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            count ++;
        }
        else 
        {
            p+=arr[count+index]-arr[index];
            count =0;
            index=i;
        }
    }
    if (count>0)
    {
       p+=arr[count+index]-arr[index];
    }
return p;
}
//Efficient video solution 
int maxprofit(int arr[],int n)
{
    int p=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            p+=arr[i]-arr[i-1];
        }
    }
    return p;
}
int main()
{
    int arr[]={1,5,3,8,12};
    cout<<maxprofit(arr,5);
}