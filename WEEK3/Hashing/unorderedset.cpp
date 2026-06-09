#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);
for(int x:s)
{
    cout<<x<<" ";
}
}
