#include<iostream>
using namespace std;
//wrong approach 
void serach(int **arr,int r,int c,int k)
{
   
    

}




/* //STAIR CASE SEARCH ALGO 
//
void search(int **arr,int r,int c,) */
int main()
{
     int **arr;
    int r=4;
    int c=4;
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
    serach(arr,r,c,33);

}