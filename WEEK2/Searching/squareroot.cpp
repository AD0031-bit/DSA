#include<iostream>
#include<vector>
using namespace std;
// naive solution
int naivesqr(int x)
{
    int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return i-1;
    
}
//Optimised solution is to use binary search alogorithm
int sqr(int x)
{
    int low=1;
    int high=x;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid==x)
        {
            return mid;
        }
        else if(mid*mid>x)
        {
            high=mid-1;
           
        }
        else if(mid*mid<x)
        {
            low=mid+1;
            ans= mid;
            
        }

    }
    return ans;

}
int main()
{
    int x=10;
    cout<<sqr(x);
}
