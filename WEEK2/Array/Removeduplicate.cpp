#include<iostream>
using namespace std;
//Using temp vector or array.
//Requires theta n time
//Auxilarry space too
int self(int arr[],int n)
{
    int temp[n]={0};
    int res=1;

    temp[0]=arr[0];
    
        for(int i=1;i<n;i++)
        {
           if(temp[res-1]!=arr[i])
           {
            temp[res]=arr[i];
            res++;
           }
        }
        for(int i=0;i<res;i++)
        {
            arr[i]=temp[i];

        }
        return res;
}

//Solution with no extra space 
//BigO(n time and BigO(1) extra space )
int self2(int arr[],int n)
{
    int count =1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
           arr[count]=arr[i];
            count++;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return count;
}
int main()
{
    int arr[]={10,20,20,30,30,30};
    cout<<self2(arr,6);

}

