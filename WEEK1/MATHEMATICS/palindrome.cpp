#include<iostream>
using namespace std;
//my approach
int palin(int n)
{
    int temp=n;
    int r=0;
    int rev=0;
    while(n>0)
    {
     r=n%10;
     rev=rev*10+r;
     n=n/10;   
    }
    if(temp==rev)
    {
        return 1;
    }
    else{
        return 0;
    }
}
//better approach-teacher
bool palin2(int n)
{
    int temp=n;
    int r=0;
    int rev=0;
    while(n>0)
    {
     r=n%10;
     rev=rev*10+r;
     n=n/10;   
    }
  return (temp==rev);
    
   
    }

int main()
{
    if(palin2(78987))
    {
        cout<<"Yes"<<endl;
    }
     if(palin2(8668))
    {
        cout<<"Yes"<<endl;
    }
     if(palin2(8))
    {
        cout<<"Yes"<<endl;
    }
}