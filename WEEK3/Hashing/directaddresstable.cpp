#include<iostream>
#include<vector>
using namespace std;
//Self+little idea from the video 
   
void insert(vector<bool>&check,int a)
{
    check[a]=1;

}
bool search(vector<bool>&check,int a)
{
   if( check[a]==1)
   {
    return true;
   }
   else{
    return false;
   }

}
void del(vector<bool>&check,int a)
{
    check[a]=0;

}
int main()
{
    vector<bool>arr(999,0);
    insert(arr,10);
    insert(arr,20);
    insert(arr,119);
    cout<<search(arr,10);
    cout<<search(arr,10);
    del(arr,119);
    cout<<search(arr,119);
}
// 1.Direct address table cannot handle larger values of keys for 
//example phone number as key
//2.floating point numbers will cause problem as they cannot treated as the array indexes
//3.keys can be strings or address- can be used as indexof array

