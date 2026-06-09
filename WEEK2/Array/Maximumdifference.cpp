#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//self try 
int self(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(max<(arr[j]-arr[i]))
            {
                max=arr[j]-arr[i];

            }
        }
    }
    return max;
}
//efficent solution 
//Idea:We consider every element as array j and keep track of the min element 
int eff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int j=0;j<n;j++)
    {
        res=max(res,arr[j]-minval);
        minval=min(arr[j],minval);
    }
    return res;

}
int main()
{
    int arr[]={2,3,10,6,4,8,1};
    cout<<eff(arr,7);

}
