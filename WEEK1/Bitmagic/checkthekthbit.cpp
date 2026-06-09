#include<iostream>
using namespace std;
//There are four ways to solve this 2 naive method and 2 optimised method
int naive1(int n, int k)
{
    int x=1;
    for(int i=0;i<k-1;i++)
    {
        x=x*2;}
        if((n&x)!=0)
        {
            cout<<"y";
        }
        else
        {
            cout<<"N";
        }
    
}
int naive2(int n, int k)
{
    int x=1;
    for(int i=0;i<k-1;i++)
    {
        n=n/2;}
        if((n&1)!=0)
        {
            cout<<"y";
        }
        else
        {
            cout<<"N";
        }
    
}
int opt1(int n,int k)
{
    int x=1<<(k-1);
    if((n&x)!=0)
        {
            cout<<"y";
        }
        else
        {
            cout<<"N";
        }
}
int opt2(int n,int k)
{
    n=n>>(k-1);
    if((n&1)!=0)
        {
            cout<<"y";
        }
        else
        {
            cout<<"N";
        }
}




int main()
{
    int n,k;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Enter k:";
    cin>>k;
    naive1(n,k);
    naive2(n,k);
    opt1(n,k);
    opt2(n,k);
}