#include<iostream>
using namespace std;
//Circular subarray allow both circular->formed by connection last and first element of a normal array and normal subarray
int self (int arr[],int n)
{
    int maxele=arr[0];
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        maxele=max(maxele+arr[(i+1)%n],arr[(i+1)%n]);
        res=max(maxele,res);
    }
    return res;
}
int main()
{
    int arr[]={1,-2,3,2};
    cout<<self(arr,4);
}