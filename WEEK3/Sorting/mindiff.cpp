#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
//VIDEO SOLUTION 
int self(vector<int>&arr)
{
    int res=INT_MAX;
  
    
  
    for(int i=1;i<arr.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            res=min(res,abs(arr[i]-arr[j]));
            }

        }
        return res;
    }
//EFICIENT SOLUTION 
//SORT the array 
int vid(vector<int>&v)
{
    sort(v.begin(),v.end());
    int min=INT_MAX;
    for(int i=1;i<v.size();i++)
    {
        if(min>abs(v[i]-v[i-1]))
        {
            min=abs(v[i]-v[i-1]);
        }
    }
    return min;
}
// Time complexity of this program 
/* sorting takes O(nlog n )time 
the loop takes theta(n)time 
total =O(n log n)+theta(n)=O(nlog n)*/
    


int main()
{
    vector<int>v={10,3,20,12};
   
    cout<<vid(v);
}