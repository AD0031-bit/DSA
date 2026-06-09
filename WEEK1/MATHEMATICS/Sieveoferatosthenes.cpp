#include<iostream>
#include<vector>
using namespace std;
//Naive solution 
bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
   
    else if(n==2||n==3)
    {
        return true;
    }
    else if(n%2==0||n%3==0)
    {
        return false;
    }
    else{
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)
            {
                return false ;
            }
        }
        return true;
    }
}
/* // Using the algo -Self 
vector<bool> self1(int n)
{
    vector<bool>v(n+1,1);
    //Multiple of 2
    for(int i=4;i<=n;i=i+2)
    {
        
            v[i]=false;
        
    }
    //Multiple of 3
    for(int i=6;i<=n;i=i+3)
    {
       
        
            v[i]=false;
        
    }
      //Multiple of 5
    for(int i=10;i<=n;i=i+5)
    {
       
        
            v[i]=false;
        
    }
    return v;
    

} */
//Video solution- simple application 
vector<bool> sieve(int n)
{
    vector<bool>v(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])//Vector here 
        {
            for(int j=i+i;j<=n;j+=i)
            {
                v[j]=false;
            }
        }
    }
    return v;
    
}
//Optimise way
vector<bool> sieve2(int n)
{
    vector<bool>v(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])//Vector here 
        {
            for(int j=i*i;j<=n;j+=i)//Optimisation 
            {
                v[j]=false;
            }
        }
    }
    return v;
    
}
//Optimisation-Smaller divisor than are considered in earlier loop 
//Shorter and more optimised solution 
void sieve3(int n)
{
    vector<bool>v(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(v[i])//Vector here 
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i)//Optimisation 
            {
                v[j]=false;
            }
        }
    }
    
    
}

int main()
{
    int num;
    cout<<"Enter:";
    cin>>num;
  sieve3(num);
   
   
}

