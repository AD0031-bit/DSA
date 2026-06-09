#include<iostream>
#include<vector>
using namespace std;
//self -wrong
/* void self1(vector<int>a,vector<int>b)
{
    int i=0;
    int j=0;
    while(i<a.size()&& j<b.size())
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            for(int k=i;k<a.size();k++)
            {
                if(a[i]==a[k])
                {
                    i++;
                }
            }
            j++;
        }
        else{
            i++;
            j++;
        }
    }
} */
//only works for sorted array
void self2(vector<int>a,vector<int>b)
{
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size())
     {if(a[i]==a[i+1])
        {
            i++;
            continue;
        }
    if(a[i]>b[j])
    {
        j++;
    }
    else if(a[i]<b[j])
    {
        i++;
    }
    else if(a[i]==b[j]){
        cout<<a[i]<<" ";
        i++;
        j++;
       
      
    }}

}
//Naive solution int the video
//THIS SOLUTION WILL WORK FOR ANY TYPE OF ARRAY SORTED OR UNSORTED 
void naive(vector<int>a,vector<int>b)
{
    for(int i=0;i<a.size();i++)
    {
        if(i>0&&a[i]==a[i-1])
        {
            continue;
        }
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
                
            }
        }
    }
}

int main()
{
    vector<int>a={1,1,3,3,3};
    vector<int>b={1,1,1,1,3,5,7};
    self2(a,b);
}