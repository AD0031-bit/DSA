#include<iostream>
using namespace std;
int countzero(int n)
{
    int count=0;
    int r;
    long long fact=1;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }
    while(fact>0)
    { r=fact%10;
        if(r==0)
        {
            count++;
            fact=fact/10;

        }
        else{
            break;
    
       }
    }
     return count;
}

// the upper method will cause overflow for the fact varable as the factoril computed will have mant digits
// Second method as per discussed in the video
int newcount(int n)
{
    int count=0;
    for(int i=5;i<=n;i=i*5)
    {
        count=count+n/i;
    }
    return count;
}
int main()
{
    cout<<newcount(12);
}