// if pivot is given as input
#include<iostream>
#include<vector>
using namespace std;
void swap(int *a ,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void self(vector<int>&arr,int p,int l,int r)
{
    int index=0;
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
        if(arr[j]==p)
        {
            index=j;

        }
    }
    swap(&arr[r],&arr[index]);
    
}
int main()
{
    vector<int>v={50,30,20,10,5,11};
    self(v,20,0,5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}