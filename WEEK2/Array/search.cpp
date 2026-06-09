// Search an element in an array 
// time complexity is O(n) worst case is when element is not present in the array 
#include<iostream>
using namespace std;
int search (int arr[],int x, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i ;
    }
    return -1;
}
int main()
{
    int arr[]={20,5,25,7};
    int x=15;
    cout<<search(arr,x,4);
}