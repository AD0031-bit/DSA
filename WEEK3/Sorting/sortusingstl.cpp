#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>v={10,20,5,7};
//First way to use the sort function 
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;

}
cout<<"___________________________"<<endl;
// second way to sort
// here we used the greater function to change the order in which we need the array to be  
// greater function will sort the arrry so that the greater element come first
sort(v.begin(),v.end(),greater<int>());
for(int i:v)
{
    cout<<i<<endl;

}

}