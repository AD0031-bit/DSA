#include<iostream>
#include<vector>
using namespace std;
int self1(vector<int>&v)
{
    int max=v[0];
    int smax=-1;
    int index=-1;
    for(int i=0;i<v.size();i++)
    {
        if(max<v[i])
        {
            
            smax=max;
            index=i;
            max=v[i];
            
        }
        else if(smax>v[i]) {
            smax=v[i];
            index=i;

        }


    }
    return index;


}
// Naive solution 
int self2(vector<int>&v)
{
    int max=v[0];
    int smax=-1;
    int index_max=-1;
    int index_smax=-1;
    for(int i=0;i<v.size();i++)
    {if(max<v[i])
        {
            max=v[i];
            index_max=i;
        } 
    }
    for(int i=0;i<v.size();i++)
    {if(index_max!=i)
        {
 if(smax<v[i]||index_smax==-1)
    {
        smax=v[i];
        index_smax=i;
    }
    }}
    return index_smax;

}
//Naive solution in the video
int main()
{
    vector<int>v={10,5};
    cout<<self2(v);
}
