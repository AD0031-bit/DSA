#include<iostream>
#include<vector>
using namespace std;
void swap (int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int lomuto(vector<int>&arr,int l,int h)
{
    int i=l-1;
    int p=arr[h];
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }

    }
   
    swap(arr[i+1],arr[h]);
     return i+1;

}
void qsort(vector<int>&arr,int l, int h)
{
    if(l<h)
    {
        int p=lomuto(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
    
}
int main()
{
    vector<int> v={8,4,7,9,3,10,5};
    qsort(v,0,6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}