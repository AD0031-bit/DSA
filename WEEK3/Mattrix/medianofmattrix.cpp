#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//Naive solution 
void nav(int **arr,int r,int c)
{
   
    vector<int>v;
    int k=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    cout<<"Median:"<<v[r*c/2];
}
int main()
{
    int **arr;
    int r,c;
    cout<<"Enter row:";
    cin>>r;
    cout<<"Enter colum:";
    cin>>c;
    arr=new int*[r];
    for(int i=0;i<r;i++)
    {
       arr[i]=new int [c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }


}
