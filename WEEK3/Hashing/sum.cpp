#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
bool naive(vector<int>v,int s)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==s)
            {
                return true;
            }
        }
    }
    return false;
}
//we can use the two pointer approach if the array is sorted it works better for
//sorted array but for ubsorted array hashing is the best 
//wrong method
bool sum(vector<int>v,int s)
{
    unordered_set<int>st(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(st.find(s-v[i])!=st.end())
        {
            return true;
        }
    }
    return false;

}
bool efficient(vector<int>v,int s)
{
    unordered_set<int>st;
    for(int i=0;i<v.size();i++)
    {
        if(st.find(s-v[i])!=st.end())
        {
            return true;
        }
        else{
            st.insert(v[i]);
        }
    }
    return false;

}
int main()
{
    vector<int>v{8,3,4,0,5};
    cout<<efficient(v,6);
}
//time complexity O(n)
// Aux space O(n)