#include<iostream>
#include<vector>
using namespace std;
//hoare sort -to separate the arrray in 3 ways 
// even-odd, pos-neg, binary
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int hoare(vector<int>&arr,int l,int r)
{
    int i=l-1;
    int j=r+1;
    while(true)
    {
        do{
            i++;
            }
        while(arr[i]%2==0);
        do{
            j--;
        }
        while(arr[j]%2!=0);
        if(i>=j)
        {
            return j;
        }
        swap(&arr[i],&arr[j]);
    }

}
int main()
{
    vector<int>v={15,14,13,12};
    hoare(v,0,3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}