#include<iostream>
#include<vector>
using namespace std;
//naive solution -O(n)-time complexity
int self1(vector<int>&arr,int x)
{
    int i=0;
while (true)
{
    if(arr[i]==x)
return i;
if(arr[i]>x)
return -1;
i++;
}}
//optimised solution - O(logn )
//Video solution
int serach(vector<int>&arr,int x)
{
    int i=0;
    while(true)
    {
        if(arr[0]==x)return 0;
        if(arr[0])
    }

}
int main()
{
    vector<int>v={10,20,30};
    cout<<self1(v,10);
}