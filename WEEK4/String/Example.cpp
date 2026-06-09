#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string c="geeksforgeeks";
    vector<int>v(26,0);//use array here 
    for(int i=0;i<c.length();i++)
    {
        int x=c[i];
        int y='a';
        v[x-y]++;
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]>0)
        {
            cout<<(char)(i+'a')<<":"<<v[i]<<endl;
        }
    }
    
}

