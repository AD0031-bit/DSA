#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void naive (vector<int>v)
{
    for(int i=0;i<v.size();i++)
    { int j;
        for(j=i-1;j>=0;j--)
        {
            if(v[j]>v[i])
            {
                cout<<v[j]<<" ";
                break;
            }
        }
        if(j==-1)
        {
            cout<<"-1"<<" ";
        }
    }
}
vector<int> self(vector<int>v)
{stack<int>s;
    vector<int>ans;
    s.push(-1);
    for(int i=0;i<v.size();i++)
    {
        
        if(v[i]>s.top())
        {
            s.push(v[i]);
        }
       
        else{
            s.push(-1);
        }
    }
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;

}
int main()
{
    vector<int>v={15,10,18,12,4,6,2,8};
    /* vector<int>ans=self(v);
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    } */
   naive(v);
}
