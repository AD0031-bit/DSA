#include<iostream>
using namespace std;
//Better way to do 
 void self(int n)
{
    int res=0;
    while(n>0)
    {
       n=n&(n-1);
        res++;
    }
    if(res==1)
    {
        cout<<"Yes";
        
    }
    else{
        cout<<"N";
    }
    
} 
//Naive solution
int naive(int n)
{  int flag=1;
    
    while(n!=1)
    {
      
        int r=n%2;
        n=n/2;
        if(r!=0)
        {
            flag=0;
            break;
            
        }
     
    
}
if(flag)
{
    cout<<"Y";
}
else{cout<<"N";}
}
//Best way in single line solution of the given problem statement
int self2(int n)
{
    if((n&(n-1))==0)
    {
        cout<<"Yes";

    }
    else{
        cout<<"No";
    }

}
bool efficient(int n)
{
   return n&&(n&(n-1))==0;
}
int main()
{
    int n;
    cin>>n;
    cout<<efficient(n);

}