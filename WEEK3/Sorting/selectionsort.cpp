#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//Naive implementation of Selection sort 
//Thsi does not work more thinking to be done 
void self1(vector<int>&arr)
{
    int n=arr.size();
    int min=arr[0];
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n-1;j++)
        {
            if(min>arr[j])
        {
            min=arr[j];
        }
        int temp=arr[i];
        arr[i]=min;
        min=arr[i];
        

        }
    }

}
//Video solution 
void self2(vector<int>&arr)
{
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++)
    {
        int min_index=0;
        for(int j=0;j<n;j++)
       { if(arr[j]<arr[min_index])
        {
            min_index=j;
        }}
        temp[i]=arr[min_index];
        arr[min_index]=INT_MAX;


    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }

}

//Optimised solution of the following -VIDEO
void vid(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
       int min_index=i;
       for(int j=i+1;j<n;j++)
       {
        if(arr[j]<arr[min_index])
        {
            min_index=j;
        }

       } 
        swap(arr[min_index],arr[i]);
    }

}
int main()
{
    vector<int>v={10,2,5,18,8};
    vid(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
