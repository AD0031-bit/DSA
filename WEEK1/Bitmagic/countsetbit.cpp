#include<iostream>
using namespace std;
//Naive solution-O(MSB)
/*Logic the code 
MSB-most significant bit is the leftmost bit*/
int naive(int n)
{
    int res=0;
    while(n>0)
    {if((n&1)!=0)
    {
        res++;}
        n=n/2;
    }
return res;
}
//Better solution for this
int naive2(int n)
{
    int res=0;
    while(n>0)
    {
    {
        res=res+(n&1);}
        n=n/2;
    }
return res;
} 
//Brian Kerningum Algorithm-theta(set bits)
int algo(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    return res;
}
//Look up table solution


int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    

    cout<<naive(n)<<endl;
    cout<<naive2(n)<<endl;
    cout<<algo(n)<<endl;

}


