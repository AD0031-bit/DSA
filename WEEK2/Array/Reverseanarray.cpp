#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
vector<int> rev(vector<int>v)
{
    int l=v.size();
    for(int i=0;i<v.size()/2;i++)
    {
        swap(v[i],v[l-i-1]);
    }
    return v;


}
//
int main()
{
    vector<int>v={30,20,5};
    vector<int>r=rev(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<r[i]<<endl;
    }
}