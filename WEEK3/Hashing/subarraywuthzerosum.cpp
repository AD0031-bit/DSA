#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//time complexity O(n square)
bool naive(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        int count=0;
        for(int j=i;j<v.size();j++)
        {
            count+=v[j];
            if(count==0)
            {
                return true;
            }
        }
    }
    return false;
}
//O(n)-time complexity remember this 
bool efficient(vector<int>v)
{
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<v.size();i++)
    {
        pre_sum+=v[i];
        if(h.find(pre_sum)!=h.end())
        {
            return true;
        }
        if(pre_sum==0)
        {
            return true;
        }
        h.insert(pre_sum);
    }
    return false;


}

int main()
{
    vector<int>v={-3,2,1,4};
    cout<<efficient(v);
}