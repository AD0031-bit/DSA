#include<iostream>
#include<vector>
using namespace std;
// video solution 
vector<int> self (vector<int>&arr, int k)
{
    vector<int>count(k,0);
   
    for(int i=0;i<arr.size();i++)
    {
        count[arr[i]]++;
    }
    return count;
}


int main(){
    vector<int>v={1,4,4,1,0,1};
    vector<int>c=self(v,5);
    for(int i=0;i<5 ;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<"----------"<<endl;
    int index=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<c[i];j++)
        {
            cout<<i<<" ";
        }

    }

}
