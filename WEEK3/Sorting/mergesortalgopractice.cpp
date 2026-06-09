#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int l,int m, int r)
{
    vector<int>temp;
    int i=l;
    int j=m+1;
    while(i<=m&&j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=r)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++)
    {
        arr[l+k]=temp[k];
    }
}
void mergesort(vector<int>&arr,int l,int r)
{
    if(r>l)
    {
        int m= l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }

}
int main()
{
    vector<int>arr={20,5,40,60,30};
    mergesort(arr,0,4);
    for(int x:arr)
    {
        cout<<x<<" ";
    }

}