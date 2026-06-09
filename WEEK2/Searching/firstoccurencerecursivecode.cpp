#include<iostream>
#include<vector>

using namespace std;
int self1(vector<int>&arr,int x,int low, int high,int ans)
{
    
    if(low>high)
    {return ans;}
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
    
        return self1(arr,x,low,mid-1,mid);
    }
    else if(arr[mid]>x)
    {
          return self1(arr,x,low,mid-1,ans);
    }
    else{
        return self1(arr,x,mid+1,high,ans);
    }

}
int main()
{
    vector<int>v={7,10,10};
    int x=10;
    cout<<self1(v,x,0,v.size()-1,-1);
}