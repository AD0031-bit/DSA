//Subsequence of string is by removing zero or more charaters
// For a string Subsequences-2 raised to power n subsequences 
#include<iostream>
using namespace std;
//This is an iterative solution of time complexity big O(n+m)
//Aux space :O(1)
bool subsequence(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    int p1=0,p2=0;
    while(p2<l2&&p1<l1)
    {
        if(s1[p1]==s2[p2])
        {
            p1++;
            p2++;
        }
        else {
            p1++;
        }

    }
    if(p2==l2)
    {
        return true;
    }
    else {
        return false;
    }

}
//This is a recursive soltuion and Iterative one is a better than the recursive one

bool recsubsequence(string s1,string s2,int n,int m)
{
if(m==0)
return true;
if(n==0)
return false;
if(s1[n-1]==s2[m-1])
return recsubsequence(s1,s2,n-1,m-1);
else{
    return recsubsequence(s1,s2,n-1,m);
}
}
int main()
{
    string s1="ABC";
    string s2="a";
    cout<<recsubsequence(s1,s2,s1.length(),s2.length());
}
//syntax in java charAt(n-1)
