#include<iostream>
#include<algorithm>
using namespace std;
//Taken help fom chatgpt but self and naive solution 
//Time complexity- bigO(n square)
void maxsubarray(int arr[],int n)
{
    int s=0;
    int e=n-1;
   int res=arr[0];
    while(s<=n-1)
    {
        int sum=0;
        for(int e=s;e<n;e++)
        {

            sum=sum+arr[e];
            res=max(sum,res);
           

        }
        
        s++;

    }
    cout<<res;
}
//efficient solution 
//traverse the array from left to right 
//Hint ->Maximum sum of subarray ending with previous element 
//to compute sum ending with current element
void effsol(int arr[],int n)
{
    int maxele=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
      
        maxele=max(maxele+arr[i],arr[i]);
        res=max(res,maxele);
    }
    cout<<res;
    
}
int main()
{
    int arr[]={-3,8,-2,4,-5,6};
    maxsubarray(arr,6);
}