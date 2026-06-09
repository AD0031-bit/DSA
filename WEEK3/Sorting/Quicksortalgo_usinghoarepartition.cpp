#include<iostream>
#include<vector>
using namespace std;
void swap (int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int hoarepartition(vector<int>&arr,int l,int r)
{
    int p=arr[l];
    int i=l-1;
    int j=r+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<p);
        do{
            j--;

        }while(arr[j]>p);
    
    if(i>=j)
    {
        return j;
    }
    swap(&arr[i],&arr[j]);
}}
void qsort(vector<int>&v,int l,int r)
{
    if(l<r)
    {
        int p=hoarepartition(v,l,r);
        qsort(v,l,p);
        qsort(v,p+1,r);

    }
}
void qsort1(vector<int>&v,int l,int r)
{
    Begin:
    if(l<r)
    {
        int p=hoarepartition(v,l,r);
        qsort1(v,l,p);
        l=p+1;
        goto Begin;

    }
}

int main()
{
    vector<int>v={8,4,7,9,3,10,5};
    qsort1(v,0,6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}