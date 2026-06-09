#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print(int arr[],int n)

5345678
    +
vector<int> self1(vector<int>v)
{
    stack<int>s;
    s.push(1);
    vector<int>ans;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[s.top()-i])
        {
            s.push(i+s.top());           
        }
        else {
           
           s.push(1);
        }

    }
    int k=0;
    while(!s.empty())
    {
        ans[k]=s.top();
        k++;
        s.pop();
    }
    
    return ans;

}
int main()
{
    vector<int>v={13,15,12,14,16,8,6,4,10,30};
    vector<int>ans=self1(v);
    for(int i=ans.size();i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
}
