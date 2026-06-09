#include<iostream>
#include<algorithm>
using namespace std;
void transpose(int **arr,int n)
{   cout<<"-------------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)//Chatgpt correction j=i
        {
           swap(arr[j][i],arr[i][j]);
        }
        cout<<endl;
    }
    cout<<"-------------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int **arr;
    int r,c;
    cout<<"Enter order:";
    cin>>r;
    /* cout<<"Enter colum:";
    cin>>c; */
    arr=new int*[r];
    for(int i=0;i<r;i++)
    {
       arr[i]=new int [r];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }   
    transpose(arr,r);


}