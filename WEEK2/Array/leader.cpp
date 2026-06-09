#include<iostream>
using namespace std;
//Naive solution 
void self(int arr[],int n)
{

    for(int i=0;i<n;i++)
    { int flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
               flag=0;
               break;
            }        
             
        }
        if(flag)
          cout<<arr[i]<<" ";
       
    }
}
//Efficient solution 
//Traverse from right side and the element at right side is always the leader 
//Theta(n)->time complexity
void eff(int arr[],int n)
{
    int p=arr[n-1];
    cout<<p<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>p)
        {
            cout<<arr[i]<<" ";
            p=arr[i];
        }

    }
    //use an array to store these leaders and then reverse the arraay and print it 
    

}
int main()
{
    int arr[]={7,10,4,10,6,5,2};
    eff(arr,7);
}
