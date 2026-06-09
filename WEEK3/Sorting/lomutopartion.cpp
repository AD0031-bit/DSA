//Works by traversing the input array only once 
//Pivot is always assumed as the last element of the array 
#include<iostream>
#include<vector>
using namespace std;
//self try -using the video answer 
void swap(int* a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void self(vector<int>&arr,int l,int r)
{
    int p=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(&arr[i],&arr[j]);
            

        }

    }
    swap(&arr[i+1],&arr[r]);
    
}
int main()
{
    vector<int>v={10,80,30,90,40,50,70};
    self(v,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
}