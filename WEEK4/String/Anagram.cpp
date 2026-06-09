#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//Naive method->sorting 
//This takes big O(n log n) time 
bool naive(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        return true;
    }
    else {
        return false;
    }
} 
//Idea of better approach is to instialise a count array of character ASCII value as index 
//Time complexity Big O(n)
//Big O(n)-Auxillary space 
bool anagram(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    vector<int>v(26,0);
    for(int i=0;i<s1.length();i++)
    {
        v[s1[i]-'a']++;
         v[s2[i]-'a']--;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(v[i]!=0)
        {
            return false;
        }

    }
    return true;

}


int main()
{
    cout<<anagram("abaac","aacba");
}