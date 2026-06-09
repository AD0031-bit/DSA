#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(vector<int>&arr)
{
     int l=0,mid=0,h=arr.size()-1;
     while(mid<=h)
    { if(arr[mid]<5)
     {
        swap(arr[mid],arr[l]);
        l++;
        mid++;
     }
     else if(arr[mid]<=10)
     {
        mid++;
     }
     else{
        swap(arr[mid],arr[h]);
        h--;
     }}

}
int main()
{
    vector<int>v={10,5,6,3,20,9,40};
    sorting(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}