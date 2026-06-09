#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
bool naive(vector<int>v,int s)
{
    for (int i=0;i<v.size();i++)
    {
        int sum=0;
        for(int j=i+1;j<v.size();j++)
        {
            sum+=v[j];
            if(sum==s)
            {
                return true;
            }
        }

    }
    return false;
}
bool self1(vector<int>v,int sum)
{
    //O(n):time complexity 
    //Aux space O(n)
    int pre_sum=0;
    unordered_set<int>s;
    for(int i=0;i<v.size();i++)
    {
        pre_sum+=v[i];
        if(s.find(pre_sum-sum)!=s.end())
        {
            return true;
        }
        if(pre_sum==sum)
        {
            return true;
        }
        
        s.insert(pre_sum);

    }
    return false;

}
int main()
{
    vector<int>v={5,8,6,13,3,-1};
    cout<<self1(v,22);
}