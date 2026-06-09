#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
// Naive method self try 
//This is incorrect ... it more like the bubble sort 
/* void self1(vector<int>&arr)
{
int n=arr.size();
for(int i=1;i<n;i++)
{
    for(int j=i-1;j<n;j++ )
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            
        }
    }

} */

void insertion(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key)//here not putting the equal sign { key<=arr[j] }ensures the algo is stable 
        {
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }}

}
void self(vector<int>&arr)
{
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 &&key<arr[j])//here not putting the equal sign { key<=arr[j] }ensures the algo is stable 
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}


int main()
{
    vector<int>v={20,5,40,60,10,30};
    self(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}