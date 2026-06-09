#include<iostream>
#include<vector>
using namespace std;
//naive method ->self 
int self (vector<int>&arr)
{
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size()-1;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;


            }
        }

    }
    return count;
}
//Merge sort base function 

int main()
{
    vector<int>v={2,4,1,3,5};
   cout<< self(v);
}
