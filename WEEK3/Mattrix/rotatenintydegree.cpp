#include<iostream>
using namespace std;
void rotate(int **arr,int n)
{
    
    cout<<"-------------"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           swap(arr[i][j],arr[j][i]); 
        }
        
        
    }
   /*  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
           swap(arr[j][i],arr[n-j-1][i]); //change ->anticlockwise 90
           //swap(arr[i][j],arr[i][n-j-1])->clockwise rotate 90
        }
        
        
    } */
   for(int i=0;i<n;i++)
   {
    int l=0, h=n-1;
    while(l<h)
    {
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
   }
    
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
    int r;
    cout<<"Enter order:";
    cin>>r;
  
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
rotate(arr,r);
}