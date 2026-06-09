#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Naive solution 
float self1(vector<int>&arr1,vector<int>&arr2)
{
    vector<int>temp;
    for(int i=0;i<arr1.size();i++)
    {
      
        
            temp.push_back(arr1[i]);

    }
     for(int i=0;i<arr2.size();i++)
    {
      
        
            temp.push_back(arr2[i]);

    }
    sort(temp.begin(),temp.end());
    int n=temp.size();
    if(n%2==0)
    {
         float m=(temp[n/2]+temp[(n/2)-1])/2.0;
        return m;
    }
    else{
        return temp[n/2];
    }

}
//optimised solution is to use binary search
// Complicated way to do 
int main()
{
    vector<int>v1={10,20,30,40,50};
    vector<int>v2={5,15,25,35,45};
    cout<<self1(v1,v2);


}

