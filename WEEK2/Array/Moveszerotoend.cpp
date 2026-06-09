#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
//Big of O(n square)-time complexity
void naive(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {swap(arr[i],arr[j]);}

            }
        }
    }
}
void self(int arr[],int n)
{
    int count=0;//it is a counter for the next position non zero 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {          
             swap(arr[i],arr[count]);
             count++;
             
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
}
int main()
{
    int arr[]={8,5,0,10,0,20};
    self(arr,6);
}