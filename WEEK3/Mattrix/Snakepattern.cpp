//Time complexity is theta(r*c)
#include<iostream>

using namespace std;
void pattern(int **arr,int r,int c)
{
    cout<<"-------------------"<<endl;
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
           
        }
        else 
        {
            for(int j=c-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
         
        }
    }
}
int main()
{
    int **arr;
    int r=3;
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
    pattern(arr,r,c);
}