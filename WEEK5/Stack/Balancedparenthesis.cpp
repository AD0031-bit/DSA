#include<iostream>
#include<stack>
using namespace std;
bool balanced(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        {
            st.push(s[i]);
        }
        else{
            if(st.empty())//added by chatgpt
            {
                return false;
            }
            if((st.top()=='['&&s[i]==']')||(st.top()=='{'&&s[i]=='}')||(st.top()=='('&&s[i]==')'))
            {
                st.pop();
            }
            else{//added by chatgpt
                return false;
            }
        }
    }
    return st.empty();
//time complexity O(n)
//Aux space O(n)
}
int main()
{
    string s;
    cin>>s;
    cout<<balanced(s);
}