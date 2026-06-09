#include<iostream>
#include<vector>
using namespace std;
void printfun(int **mat)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
void vecprint(vector<vector<int>>arr)
{
    for(int j=0;j<2;j++)
   {  vector<int>v;
    for(int i=0;i<2;i++)
    {
       
        int temp;
        cout<<"Enter val:";
        cin>>temp;
        v.push_back(temp);
                
    }
    arr.push_back(v);}
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main()
{
    /* int **arr;
    arr=new int*[2];
    for(int i=0;i<2;i++)
    {
        arr[i]=new int[2];
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           cin>>arr[i][j];
        }
        
    }
    printfun(arr); */
    vector<vector<int>>arr;
    vecprint(arr);
}