#include<iostream>
using namespace std;
void pattern(int **arr,int r,int c)
{
    int t=0,ri=r-1,b=c-1,l=0;
    for(int i=t;i<ri;i++)
    {for(int j=l;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    t++;
    ri--;
    b--;
    l++;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
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
    pattern(arr,r,c);



}
