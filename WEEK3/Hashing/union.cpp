#include<iostream>
#include<unordered_set>
#include<vector>
//Niabve solution O(mXm+nX(m+n))
using namespace std;
int  self(vector<int>v1,vector<int>v2)
{
    unordered_set<int>s(v1.begin(),v1.end());
    for(int i=0;i<v2.size();i++)
    {
        s.insert(v2[i]);
    }
    return s.size();
    //O(m+n)
}
int main()
{
    vector<int>a{3,3,3};
    vector<int>b{3,3};
    cout<<self(a,b);


}