#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
//naive solution-O(n2)-- checking everyelement if prsent bool false else count ++
int countdistinct(vector<int>v)
{unordered_map<int,bool>m;
   int count=0;
   for(int i=0;i<v.size();i++)
   {
    m[v[i]]=true;
   }
   for(int i=0;i<v.size();i++)
   {
   if(m[v[i]]==true)
   {
    count++;
    m[v[i]]=false;
   }
   }
   return count;
  
    

}
int video(vector<int>v)
{
    int count=0;
    unordered_set<int>s;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    return s.size();
}
int eff(vector<int>v)
{
    unordered_set<int>s(v.begin(),v.end());
    return v.size();
}
int main()
{
    vector<int>v={10,11,12};
    cout<<eff(v);
    
}
//time complexitty theta(n)
//Aux space :O(n)