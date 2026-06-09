#include<iostream>
#include<vector>
using namespace std;
//Time complexity-theta n
void self1(vector<int>a,int l,int m,int h)
{
    int i=l;
    int j=m+1;
    while(i<=m&&j<=h)
    {
        if(a[i]<=a[j])
    {
        cout<<a[i]<<" ";
        i++;

    }
    else {
        cout<<a[j]<<" ";
        j++;
    }

}
while(i<=m)
{
    cout<<a[i]<<" ";
    i++;
}
while(j<=h)
{
    cout<<a[j]<<" ";
    j++;
}

}

int main()
{
    vector<int>a={5,8,12,14,7};
    int l=0,m=3,h=4;
    merge(a,l,m,h);
}