#include<iostream>
#include<vector>
using namespace std;
// Naive method 
bool self2(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]>v[i])
            {
                return false;
            }
        }
    }
    return true;
}
//efficient solution
bool self1(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    vector<int>v={7,20,30,10};
    cout<<self2(v);
}