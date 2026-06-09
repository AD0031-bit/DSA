#include<iostream>
using namespace std;
//self -Naive solution 
void self(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
void self2(int n)
{int x=2,y=3;
    if(n<1)
    return ;
    else if(n==1)
    {
        cout<<n<<" ";
    }
    while(n%2==0)
    {
        
        cout<<x<<" ";
        n=n/2;
        x=x*2;
    }
     while(n%3==0)
    {
        
        cout<<y<<" ";
        n=n/3;
       y=y*3;
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
    if(n>3)
    {
      cout<<n<<" ";   
    }

}
//USing the fact that dicisors appear in pairs
void printdiv(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=n/i)
            {
                cout<<n/i<<" ";
            }
        }
    }

}
//The time complexity of this solution is underrrot of n 
// to keep it this way only and print the solution in the sorted order 
void sortprintdiv(int n)
//this function requires theta n square root time with auxilarry space of 1 
{
    int i;
    for( i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
         cout<<i<<" ";  
        }
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }

}
int main()
{
    sortprintdiv(15);
}
