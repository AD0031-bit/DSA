#include<iostream>
#include<vector>
using namespace std;
int main()
{
   /*  vector<vector<int>>arr(2,vector<int>(2));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j]=i+1;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
           
        }
         cout<<endl;
    }

*/
/* vector<int>arr[2];
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        arr[i].push_back(10);
    }
}
for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
           
        }
         cout<<endl;
    } */
   vector<vector<int>>arr;
    for(int i=0;i<2;i++)
    {
       vector<int>v;
       for(int j=0;j<2;j++)
       {
        v.push_back(10);
       }
       arr.push_back(v);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
           
        }
         cout<<endl;
    }






}