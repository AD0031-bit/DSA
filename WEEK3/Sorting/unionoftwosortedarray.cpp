#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// self 
void self1(vector<int>a,vector<int>b)
{
   int i=0,j=0;
   while(i<a.size()&&j<b.size()) 
   {
    if (i>0&& a[i]==a[i-1])
    {
        i++;
        continue;
    }
    if (j>0&& b[j]==b[j-1])
    {
        j++;
        continue;
    }
    if(a[i]>b[j])
    {
       
         cout<<b[j]<<" ";
        j++;
    }
    else if(a[i]<b[j])
    {
        cout<<a[i]<<" ";
        
         i++;

    }
    else if(a[i]==b[j])
    {
        cout<<a[i]<<" ";
        i++;
        j++;
    }}
    while(i<a.size())
    {
        if(a[i]!=a[i-1]&&i>0)
        {cout<<a[i]<<" ";
        i++;}
    }
      while(j<b.size())
    {
         if(b[j]!=b[j-1]&&j>0)
        {cout<<b[j]<<" ";
        j++;}
    }
    
}
//NAIVE SOLUTION 
void naive(vector<int>a,vector<int>b)
{
    vector<int>c;
    for(int i=0;i<a.size();i++)
    {c.push_back(a[i]); }
      for(int i=0;i<b.size();i++)
    {c.push_back(b[i]); }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++)
    {
        if(c[i]!=c[i-1]||i==0)
        {
            cout<<c[i]<<" ";
        }
    }
}
int main()
{
    vector<int>a={2,3,3,3,4,4};
    vector<int>b={4,4};
    naive(a,b);

}
