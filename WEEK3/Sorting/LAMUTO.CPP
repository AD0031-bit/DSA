#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void self(vector<int>&arr,int l,int r,int p)
{
    int i=-1;
  swap(arr[r],arr[p]);
    for(int j=l;j<arr.size();j++)
    {
       if(arr[j]<arr[r])
       {
        i++;
        swap(arr[j],arr[i]);
       } 
    }
    swap(arr[i+1],arr[r]);
}
int main()
{
    vector<int>v={50,30,20,10,5,11};
    self(v,0,5,2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}