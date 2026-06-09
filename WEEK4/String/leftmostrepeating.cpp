#include<iostream>
#include<vector>
#include<climits>
//Self task ->Better approach than the naive one 
using namespace std;
int self(string s)
{
    vector<int>v(26,0);
    for(int i=0;i<s.length();i++)
    {
        v[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(v[s[i]-'a']>1)
        {
            return i;
        }
              
    }
    return -1;

}
//Naive solution -video time complexity-> Big O(n square)
int naive(string s)
{
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                return i;
            }
        }
    }
    return -1;
}
// Efficient solution 
// Key idea is to keep track of index of occurence of first character 
 int eff(string s)
 {
    int result=INT_MAX;
    int arr[256];
    for(int i=0;i<256;i++)
    {
            arr[i]=-1;
    }
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]==-1)
        {
            arr[s[i]]=i;
        }
        else
        result=min(result,arr[s[i]]);

    }
    if(result==INT_MAX)
    {
        return -1;
    }
    return result;
 }
 //aux space O(n+CHAr),aux spae=O(1) as char is constant 
 //Further optimised solution for this ques 
// traversing the string from the right and using the boolean array of visited and not visited
int moreeff(string s)
{
    int res =-1;
    vector<bool>arr(256,false);
    int l=s.length();
    for(int i=s.length()-1;i>=0;i--)
    {
        if(arr[s[i]]==false)
        {
            arr[s[i]]=true;
        }
        else{
            res=i;
        }


    }
    return (res==INT_MAX)?-1:res;

}

int main()
{
    cout<<moreeff("abccbd");
}