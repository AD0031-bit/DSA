#include<iostream>
using namespace std;
//Naive approach-O(n square)
int self1(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
        if(count%2!=0)
        {
            cout<<arr[i];
            break;
        }
    }
}
//Efficient solution-theta (n)
int self2(int arr[],int n)
{ int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    return x;
}
int main()
{
    int arr[]={8,7,7,8,8};
    int n=5;
   cout<< self2(arr,n);
}