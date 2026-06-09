#include<iostream>
using namespace std;
//Naive soltuion
void self(int x,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=x;
    }
    cout<<"Ans:"<<ans<<endl;
}
/*Idea fo refficient time solution 
power(x,n)={If(n%2)==0
              power(x,n/2)*power(x,n/2)  }
            else {
            power(x,n-1)*x}
*/
//Using recursion -time complexity->T(n)=t(n/2)+theta(1)
//Log n, time complexity-theta(log n)
//Space complexity-theta (log n)

int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    {
        return temp;
    }
    else{
        return temp*x;
    }

}
int main()
{
    cout<<power(3,5);
}
