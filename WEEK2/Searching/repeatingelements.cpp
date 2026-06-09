#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//These all are video solutions 
//Super naive
int self1(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
                return v[i];
            }
        }
    }
    
}
//Naive solution
int self2(vector<int>v)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1])
        {
            return v[i];
        }
    }

}
//Efficient solution
int eff (vector<int>v)
{
    int n=v.size();
    vector<bool>check(n,false);
    for(int i=0;i<n;i++)
    {
        if(check[v[i]])
        {
            return v[i];
        }
        else 
        {
            check[v[i]]=true;
        }
    }

}
//Efficient code self practice 
int eff2(vector<int>&v)
{
    int n=v.size();
    vector<bool>check(n,false);
    for(int i=0;i<n;i++)
    {
        if(check[v[i]])
        return v[i];
        else 
        {
            check[v[i]]=true;
        }

    }
}


int main()
{
    vector<int>v={0,2,2,1,3};
    cout<<eff2(v);
}
