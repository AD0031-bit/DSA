#include<iostream>
#include<vector>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void practice(vector<int>&arr,int l,int r)
{
    int i=l-1;
    int p=arr[r];
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[j],arr[i]);
        }

    }
    //Corner case-{70,60,80,40,30}->last element is smaller element

    if(i==l-1)
    {
        i++;
         swap(arr[i],arr[r]);
    }
   

}

int main()
{
    vector<int>v={30,40,20,50,80};
    practice(v,0,4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}