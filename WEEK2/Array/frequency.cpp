#include<iostream>
#include<vector>
using namespace std;
void count(int arr[],int n)
{
   
    int k=1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i-1]==arr[i])
        {
            k++;
            
        }
        else {
            cout<<arr[i-1]<<":"<<k<<endl;
            k=1;
            
        }
    }
    

}
int main()
{
    int arr[]={10,20,30};
    count(arr,3);
}
