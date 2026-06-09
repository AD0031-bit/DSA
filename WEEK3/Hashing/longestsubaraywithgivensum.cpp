#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int naive (vector<int>v)
{
    
}
int self(vector<int>v,int sum){
    int count =0;
    unordered_map<int,int>s;
   
    int pre_sum=0;
    int maxlen=0;

    for(int i=0;i<v.size();i++)
    {
        pre_sum+=v[i];
        

        if(s.find(pre_sum-sum)!=s.end())
        {
            maxlen=max(maxlen,i-s[pre_sum-sum]);
        }
        if(pre_sum==sum)
        {
            maxlen=i+1;
        }
        
         if(s.find(pre_sum) == s.end())
            s[pre_sum] = i;   // store first occurrence only
    
    }
    return maxlen;
}