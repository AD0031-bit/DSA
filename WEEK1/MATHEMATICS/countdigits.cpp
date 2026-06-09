#include<iostream>
using namespace std;
int countdigits(int num)
{
    int i;
    for(i=0;num>0;i++)
    {
        num=num/10;
    }
    return i ;
}
int main()
{
    cout<<countdigits(9235)<<endl;
    cout<<countdigits(38)<<endl;
    cout<<countdigits(7)<<endl;
}
