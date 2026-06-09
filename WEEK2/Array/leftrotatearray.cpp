#include<iostream>
using namespace std;
//Self question 
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void self(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
swap(arr[i-1],arr[i]);

    }
     for(int i=0;i<n;i++)
    {
cout<<arr[i]<<" ";

    }

}
//Video solution 
//NAive 
void naive(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    naive(arr,5);
   
}