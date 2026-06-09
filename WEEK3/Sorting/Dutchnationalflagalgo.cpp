#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//video solution
void sorting(vector<int>&arr)
{
    int l=0,mid=0,h=arr.size()-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[l]);
            mid++;
            l++;

        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else 
        {
            swap(arr[mid],arr[h]);
            h--;

        }
    }
}
int main()
{
    vector<int>v={0,1,2,1,1,2};
    sorting(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}