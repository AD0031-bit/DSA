#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//WRONG WAYYAAAAYAAAAAYAAA
void lomuto(vector<int>&v)
{
    int p=1;
    int i=-1;
    int r=0;
    int w=1;
    int b=2;
   
    int j=v.size();
     int mid=i+(j-i)/2;
   while(true)
   {
    do{
        i++;
        swap(v[i],r);
        }
        while(v[i]==0);
       
        do{
            mid++;
            swap(v[mid],w);
        }
        while(v[j]==1);
         do{
            j--;
            swap(v[j],b);

        }
        while(v[j]==2);
        if(i>=j)
        {
            return ;
        }
        

   }


}
int main()
{
    vector<int>v={0,1,0,2,1,2};
    lomuto(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}