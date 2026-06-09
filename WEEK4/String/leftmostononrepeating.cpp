#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
// naive in video->nested for loop 

void self1naive(string s)
{
    map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]==1)
        {
            cout<<i;
            return ;
            
        }
    }
    cout<<-1;
    return ;
}
int main()
{
    string str="geeksforgeeks";
    self1naive(str);

}