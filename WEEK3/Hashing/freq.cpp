#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void freq(vector<int>v)
{
    unordered_map<int,int>m;//empty hash map
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
   /*  unordered_map<int,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    } */
   for(auto x:m)
   {
    cout<<x.first<<" "<<x.second<<endl;
   }

//time complexity O(n)
//auxillary space O(n)
}
int main()
{
    vector<int>v={10,10,10,10};
    freq(v);
}