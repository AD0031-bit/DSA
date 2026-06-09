#include<iostream>
#include<string>
using namespace std;
bool check(string c,int n,int i)
{
    if(i>=n/2)
    return true;
  
    
        if(c[i]!=c[n-i-1])
        return false;
        else 
       return check(c,n,i+1);



    





}
int main()
{
    string c;
   
    getline(cin,c);
     int len=c.length();
    if(check(c,len,0))
    {
        cout<<"true";
    }
    else 
    {
        cout<<"false";
    }
}