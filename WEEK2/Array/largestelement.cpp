#include<iostream>
#include<vector>
using namespace std;
//optimised approach
int self1(vector<int>arr)
{
    int max=0;
    int index=0;
    for(int i=0;i<arr.size();i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            index=i;
            
        }

    }
    return index+1;
}
int main()
{
    vector<int>arr={10,20,5,7,9};
    cout<<self1(arr);
}
//naive- using nested to loop to check eac element