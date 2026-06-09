#include<iostream>
using namespace std;
void print1(int n)
{
    if(n==0)
    return;
    print1(n-1);
    cout<<n<<endl;
}
void print2(int start, int end)
{
    if(start<=end)
    {
        cout<<start<<endl;
        start++;
        print2(start,end);


    }
}
int main()
{
    print2(1,10);
}