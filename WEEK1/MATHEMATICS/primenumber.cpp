#include<iostream>
using namespace std;
void self1(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            for(int j=i;j<=i*i;j++)
            {
                cout<<j<<endl;
            }
            
        }
    }
}
int main()
{
    self1(12);
}
