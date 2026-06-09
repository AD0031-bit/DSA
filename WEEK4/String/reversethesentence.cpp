#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
//self-using auxillary space
void self (string s)
{
    vector<string>v;
    string ans;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==' ')
        {
            v.push_back(ans);
            ans.clear();
        }
        else {
            ans.push_back(s[i]);
        }
        
    }
        v.push_back(ans);
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";

    }

}
// without using any auxillary space 
void self2(vector<string>s)
{
   for(int i=0;i<s.size()/2;i++)
   {
    string temp=s[s.size()-i-1];
    s[s.size()-i-1]=s[i];
    s[i]=temp;    
   }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";

    }
}
//using stack 
void self3(string s)
{
stack<string>st;
 string ans;
for(int i=0;i<s.length();i++ )
{
   
    if(s[i]==' ')
    {
        st.push(ans);
        ans.clear();
    }
    else {
        ans.push_back(s[i]);
    }
}
st.push(ans);
s=" ";
while(!st.empty())
{
    s+=st.top();
    st.pop();
    s+=" ";
}
 for(int i=0;i<s.size();i++)
    {
        cout<<s[i];

    }
}
//incorrect one 
void self4(string s)
{
    int st=0,l=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==' ')
        {
            
            for(int j=st;j<=l/2;j++)
            {
                swap(s[j],s[l-j-1]);
            }
            st=i+1;
            l=i+1;
            
           
        }
        else{
           l++;
        }

    }
    for(int i=0;i<s.length()/2;i++)
    {
        swap(s[i],s[s.length()-i-1]);

    }
     for(int i=0;i<s.size();i++)
    {
        cout<<s[i];

    }

}
//Video Aproach 
void reverse(string &st, int s,int l)
{
    while(s<=l)
    {
        swap(st[s],st[l]);
        s++;
        l--;
        
    }
}
/*this code follows that if we will first reverse all the words 
then we will reverse the whole string to get th answer string*/
void vid(string s)
{
    int start=0;
    for(int end=0;end<s.length();end++)
    {
        if(s[end]==' ')
        {
            reverse(s,start,end-1);
            start=end+1;
        }
    }
    reverse(s,start,s.length()-1);
    reverse(s,0,s.length()-1);
       for(int i=0;i<s.size();i++)
    {
        cout<<s[i];

    }

}
/* Language specific things :
for JAVA 
String s=" Welcome to gfg"
char[]str=s.toCharArray()
String s= new String(str);
better than using than string as string are immutable
*/
/*C++
in case you intialize a character array 
like below :
char str[]="Welcome to gfg"->An extra character /0 will be added to the end of the string by default
do pass the array size minus one parameter
*/

int main()
{
    string s="Welcome to gfg";
    vid(s);
}

