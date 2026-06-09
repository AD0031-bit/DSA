//Time complexity theta r+c
#include<iostream>
using namespace std;
void pattern(int **arr,int r,int c){
    if (r==1)
    {
         for(int i=0;i<c;i++)
    {
        cout<<arr[0][i]<<" ";
        
    }
    return ;
    }
else if(c==1)
{
   
    
         for(int i=0;i<r;i++)
    {
        cout<<arr[i][0]<<" ";
        
    }
    return ;
    

}
else{
    for(int i=0;i<c;i++)
    {
        cout<<arr[0][i]<<" ";
    }
    for(int i=1;i<r;i++)
    {
        cout<<arr[i][c-1]<<" ";
    }
    for(int i=c-2;i>=0;i--)
    {
        cout<<arr[r-1][i]<<" ";
    }
    for(int i=r-2;i>0;i--)
    {
        cout<<arr[i][0]<<" ";
    }


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