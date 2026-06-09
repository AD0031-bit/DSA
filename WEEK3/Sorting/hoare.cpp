#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void self1(vector<int>&arr,int l,int h)
{
    int p=arr[l];
    int i=l-1;
    int j=h+1;
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
            return ;
        }
       

        swap(&arr[i],&arr[j]);
        //Corner cases
      
      
    }
    
}
int main()
{
    vector<int>v={5,5,5,5};
    self1(v,0,3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}