#include<iostream>
#include<vector>
using namespace std;
//Very naive solution for the given problem statement 
bool self1(vector<int>&arr,int x)
{for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            for(int k=0;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
//Optimised solution 
bool self2(vector<int>&arr,int x)
{
   

    for(int k=0;k<arr.size();k++)
    { int i=0;
    int j=arr.size()-1;
        while(i<j)
        {
            if(arr[i]+arr[j]>x-arr[k])
            {
                j--;
            }
            else if(arr[i]+arr[j]<x-arr[k])
            {
                i++;
            }
            else if(arr[i]+arr[j]==x-arr[k]) {
                return true;
            }
        }
       
    }
     return false;

}
// Same approach but the answer given in the video
bool ispair(vector<int>&arr,int x,int s)
{
    int i=s;
    int j= arr.size()-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            return true;
        }
        else if(arr[i]+arr[j]>x)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
    return false;
}
bool istriplet(vector<int>&arr,int x)
{
    for(int i=0;i<arr.size()-2;i++)
    {
        if(ispair(arr,x-arr[i],i+1))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int>v={2,3,4,8,9,20,40};
    int x=32;
    cout<<istriplet(v,x);
}
// the time complexity of this solution remains O(n^2)even if the we are given unsorted array this because that O(nlogn)+O(n^2)gives O(n^2)whuch is the upper bound on the time complexity