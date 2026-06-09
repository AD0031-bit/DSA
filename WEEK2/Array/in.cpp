//Insert in an array 
#include<iostream>
using namespace std;
void insert(int arr[],int n, int pos,int ele)

  {  for(int i=n;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    cout<<"done";}

int main()
{
    int arr[5]={5,10,20};
    int x=7;
    int pos=2;
    insert(arr,3,pos,x);
    
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}