#include<iostream>
using namespace std;
//this one way
/* int gcd1(int num1,int num2)
{   int ans;
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0&& num2%i==0)
        {
            ans=i;
        }
    }
    return ans;

}

// better way taught in the class
int gcdnew(int n1,int n2)
{
    int res=min(n1,n2);
    while(res>0)
    {
        if(n1%res==0 && n2%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}
// Euclidean algorithm gcd(a,b)=gcd(a-b,b)
int euclideanalg(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
} */
//More Optimized way of euclidean algorithm
int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else 
    {
        return gcd(b,a%b);

    }
}
int main()
{
    cout<<gcd(12,15);
}