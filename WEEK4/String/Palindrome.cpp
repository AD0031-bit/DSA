#include<iostream>
#include<string>
using namespace std;
bool palin(string &a){
int len=a.length();
/* for(int i=0;i<len/2;i++)
{
    if(a[i]!=a[len-i-1])
    {
        return false;
    }
}
return true; */

//Two pointer approach
int b=0;
int e=len-1;
while(b<e)
{
    if(a[b]!=a[e])
    {
        return false;
    }
    b++;
    e--;
}
return true;

};
int main()
{
    string a="KAAK";
    cout<<palin(a);
}