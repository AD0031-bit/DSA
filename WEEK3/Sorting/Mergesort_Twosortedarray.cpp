
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Primary contion is that both the arrays are sorted 

// naive approach 
vector<int> self1(vector<int>&a,vector<int>&b)
{
    int n=a.size()+b.size();
    for (int i=0;i<b.size();i++)
    {
        a.push_back(b[i]);

    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    return a;
}
//using library sort function
vector<int> self2(vector<int>&a,vector<int>&b)
{
    int n=a.size()+b.size();
    for (int i=0;i<b.size();i++)
    {
        a.push_back(b[i]);

    }
    
   sort(a.begin(),a.end());
    return a;
}

//Efficient solution -using the idea in the video
//SELF 
//Time -thata(m+n)
vector<int> self3(vector<int>a,vector<int>b)
{
    vector<int>c;
    int i=0;
    int j=0;
   while(i<a.size()&&j<b.size())//imp condition 

 {  if(a[i]<=b[j])
    {
        c.push_back(a[i]);
        i++;

    }
    else if(a[i]>b[j])
    {
        c.push_back(b[j]);
        j++;
    }}
    //ONLY of these loops will executed a

     while(i < a.size())
    {
        c.push_back(a[i]);
        i++;
    }

    // Copy remaining elements of b
    while(j < b.size())
    {
        c.push_back(b[j]);
        j++;
    }
    return c;
}
int main()
{
    vector<int>v1={10,15,20,20};
    vector<int>v2={1,12};
    vector<int>v3=self3(v1,v2);
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }

}

