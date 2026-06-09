#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//self naive solution
// this is the optimised solution
// time complexity is O(n logn)
int self1(vector<int>&arr,int m)
{
    sort(arr.begin(),arr.end());
   
    int min=INT_MAX;
    int diff;
     for(int i=0;i<=arr.size()-m;i++)
    {
        diff=arr[i+m-1]-arr[i];
        if(diff<min)
        {
            min=diff;
        }}
        return min;

   


}
int main()
{
    vector<int>v={3,4,1,9,56,7,9,12};
    int m=5;
    cout<<self1(v,m);
}
