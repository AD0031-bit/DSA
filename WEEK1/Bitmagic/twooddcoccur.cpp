#include<iostream>
using namespace std;
//Naive solution
int self1(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
        if(count%2!=0)
        {
            cout<<arr[i]<<endl;
            
        }
    }
}
//Efficient solution
void self2(int arr[],int n)
{
    int odd1=0,odd2=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&1)!=0)
        {
            odd1=odd1^arr[i];
        }
        else{
            odd2=odd2^arr[i];
        }

    }
    cout<<odd1<<" "<<odd2;    
}

int main()
{
    int arr[]={3,4,3,4,5,4,4,6,7,7};
    int n=10;
    self2(arr,n);
}