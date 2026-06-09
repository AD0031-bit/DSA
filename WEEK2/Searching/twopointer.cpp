#include<iostream>
#include<vector>
using namespace std;
//naive solution ->nested loop arr[i]+arr[j]==number
//Two pointer technique-uses the fact that the array is sorted
 // Video solution 
 bool sum(vector<int>&arr,int x)
 {
     int j=arr.size()-1;
     int i=0;
    
    
    while(j>i)
       { if(arr[i]+arr[j]>x)
        {
            j=j-1;
        }
        else if(arr[i]+arr[j]<x)
        {
            i=i+1;

        }
        else 
        {
            return true;
        }}
        return false;
 }
int main()
{
    vector<int>v={2,5,8,12,30};
    int x=17;
    cout<<sum(v,x);
    
}