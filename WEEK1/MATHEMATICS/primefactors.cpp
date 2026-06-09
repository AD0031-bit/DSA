#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    return false;
    else if(n==2||n==3)
    return true;
    else if(n%2==0||n%3==0)
    {
        return false;
    }
    else{
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0||n%(i+2)==0)
            {
                return false;
            }
        }
    }
    return true;
}
void primefactor(int n)
{
    for(int i=2;i<=n;i++)
    {
       

        if(isprime(i))
        {
            while(n%i==0)
           { cout<<i<<" ";
       n=n/i;}

        }
    }
}
//Ideas for efficient solution 
//1)Divisors always appear in pairs 
//2)A number can be written as multiplication of power of prime number 
//Efficient way 
void effprimefactor(int n)
{
    if(n<=1)
    {
        return ;
    }
for(int i=2;i*i<=n;i++)
{
    while(n%i==0)
    {
        cout<<i<<" ";
          n=n/i;
    }
  
}
if(n>1)
{
    cout<<n<<" ";
}

}
//With less iterations 
void moreeff(int n)
{
    if(n<=1)
    {
        return ;
    }
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
     while(n%3==0)
    {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
         while(n%(i+2)==0)
        {
            cout<<i+2<<" ";
            n=n/(i+2);
        }
    }
    if ((n>3))
    {
     cout<<n<<" ";
    }
    
}
int main()
{
    moreeff(26);
}
