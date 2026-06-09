#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<=0)
    return 0;
    else{
        int r=n%10;
        return sum(n/10)+r;

    }

}
int main()
{
    cout<<sum(123);
}