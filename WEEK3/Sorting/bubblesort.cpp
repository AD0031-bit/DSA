#include<iostream>
#include<vector>
using namespace std;
void self1(vector<int>&arr)
{int n=arr.size();
    for(int i=0;i<n;i++)
    {for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
//The time complexity of the the program if theta(n2)
//OPTIMISED SOLUTION-VIDEo IMPLEMENTATION
//IF in case a sorted array is passed then to save up extra work a more 
//optimised approach to bubble sort 
void vid(vector<int>&arr)
{int n=arr.size();
    bool swap;
    for(int i=0;i<n;i++)
    {swap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        if(!swap)
        {
            break;
        }

    }
}
int main()
{
    vector<int>v={10,2,3,8,7,9};
    vid(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;

    }
}
//Bubble sort is table and in  place does not require any extra array

