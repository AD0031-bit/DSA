#include<iostream>
using namespace std;
//Iterative solution
#include <cmath>

class Solution {
public:
    int digitsInFactorial(int n) {
        if (n == 0 || n == 1) return 1;

        double digits = 0;
        for (int i = 2; i <= n; i++) {
            digits += log10(i);
        }
        return (int)(digits) + 1;
    }
};
int fact(int n)
{
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}

//Recursive solution 
int fact2(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }

}
int main()
{
    cout<<fact2(4)<<endl;
    cout<<fact2(6)<<endl;
    cout<<fact2(0)<<endl;

}