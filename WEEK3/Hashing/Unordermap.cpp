#include<iostream>
#include<unordered_map>
using namespace std;
//[]->memeber access operator 
int main()
{
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["idc"]=30;
    m.insert({"courses",50});
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
} 