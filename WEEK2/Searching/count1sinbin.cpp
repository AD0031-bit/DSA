#include<iostream>
#include<vector>
using namespace std;
// naive solution to solve this problem is to create a linear search here by traversing through whole array and 
//counting the number of 0 in the array  after 0 one  will occur nad minus that position from the number of elements in the array 

// the optimised solution for this is using binaray search algo and use it like first occurence and if 1 is found minus that position from  number of elements in the array

int count1self(vector<int>&arr)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<1)
        {
            low=mid+1;
        }
        else if(arr[mid]<1)
        {
            high=mid-1;
        }
        else{
            if(arr[mid]!=arr[mid-1]||mid==0)
            {
                return arr.size()-mid;
            }
            else {
                high=mid-1;
            }

        }
    }
    

}
// video solution 
int count1(vector<int>&arr)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
        {
            low=mid+1;
        }
       
        else{
            if(arr[mid]!=arr[mid-1]||mid==0)
            {
                return arr.size()-mid;
            }
            else {
                high=mid-1;
            }

        }
    }
    

}

int main()
{
    vector<int>v={0,0,0,1,1,1,1};
    cout<<count1(v);
}