//This is also called quick select 
#include<iostream>
#include<vector>
#include<random>
using namespace std;
//Naive solution that is sorting the array
void swap (int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int hoare(vector<int>&arr,int l,int r)
{
    int p=arr[l];
    int i=l-1;
    int j=r+1;
    while(true)
    {
        do{
            i++;
        }
        while(arr[i]<p);
        do{
            j--;
        }
        while(arr[j]>p);
        if(i>=j)
        {
            return j;
        }
        swap(&arr[i],&arr[j]);

    }


}
void qsort(vector<int>&arr,int l,int r)
{
    if(l<r)
   {int p= hoare(arr,l,r);
   qsort(arr,l,p);
   qsort(arr,p+1,r);}

}
//OPTIMISED SOLUTION OF THIS FUNCTION 
int func(vector<int>&arr,int k)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {int p=hoare(arr,low,high);
    if(p==k-1)
    {
        return arr[p];
    }
    else if(p>k-1)
    {
        high=p-1;
        
    }
    else{
        low=p+1;
    }
} return -1;

}


int main()
{
    vector<int>v;
    int n;
    cout<<"Enter the number of ele=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    int k;
    cout<<"Enter k:";
    cin>>k;
    int t=func(v,k);
    cout<<"value:";
    cout<<t;


}
