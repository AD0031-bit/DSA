#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
void intersec(vector<int>v1,vector<int>v2)
{
    unordered_map<int,int>m;
    for(int i=0;i<v1.size();i++)
    {m[v1[i]]++;}
    for(int i=0;i<v2.size();i++)
    {m[v2[i]]++;}
     for(int i=0;i<v1.size();i++)
    {if(m[v1[i]]==2)
    {
        cout<<v1[i]<<endl;
        m[v1[i]]=-1;
    }}
}
void vid(vector<int>v1,vector<int>v2)
{
    unordered_set<int>m(v2.begin(),v2.end());

     for(int i=0;i<v1.size();i++)
    {if(m.find(v1[i])!=m.end())
    {
        cout<<v1[i]<<endl;
      
    }}
}
int main()
{
    vector<int>v1={10,20,30};
    vector<int>v2={30,10};
   vid(v1,v2);
}