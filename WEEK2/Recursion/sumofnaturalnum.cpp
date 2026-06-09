#include<iostream>
using namespace std;
// tail approach
int sum(int n,int a)
{
    if(n==0)
     return a;

     return sum(n-1,n+a);
}
int main()
{
   cout<< sum(6,0);
}
