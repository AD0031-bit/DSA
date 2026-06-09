#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void self1(vector<int>&arr,int l,int r )
{
    int p=arr[l];
    int i=l-1;
    int j=r+1;
    while(true){
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
        swap(arr[i],arr[j]);
    }

}
int main()
{
    vector<int>arr={5,3,8,4,2,7,1,10};
    self1(arr,0,7);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }



}

