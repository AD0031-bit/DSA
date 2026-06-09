#include<iostream>
using namespace std;
//Self ->Time complexity is O(n square)
int self(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                count++;
              }
              else 
              {
                break;
              }}
              res=max(count,res);
        
    
   
} return res;}
//Self-2
int self2(int arr[],int n)
{
    int count =0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count ++;
        }
        else{
            res=max(res,count);
            count =0;
        }

    }
     res=max(res,count);
    return res;
}
int main()
{
    int arr[]={0,1,1,1,0,1,0};
    cout<<self2(arr,7);

}