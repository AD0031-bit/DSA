#include<iostream>
#include<vector>
#include<algorithm>
//AASUMPTION no duplicates
using namespace std;
void self(vector<int>&arr)
{
    int item=arr[0];
    int count;
    for(int i=0;i<arr.size();i++)  
    {
        count=0;
        for(int j=0;j<arr.size();j++)
        {if(arr[j]<item)
        {
            count++;
        }}
        
       
       int temp=item;
        item=arr[count];
        arr[count]=temp;

    }  
   
    
}
// video solution 
//Only for distinct elements 

void vid(vector<int>&arr)
{
    for(int cs=0;cs<arr.size()-1;cs++)
    {
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<arr.size();i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }}

            swap(item,arr[pos]);
        
    
    while(pos!=cs)
    {
        pos=cs;
        for(int i=cs+1;i<arr.size();i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }}
            swap(item,arr[pos]);
        

    }

}}
// Extention to this code -duplicate and count the number of cycles
//For counting the number of cycle
void count(vector<int>&arr)
{ int coutncyc=0;
    for(int cs=0;cs<arr.size()-1;cs++)
    {
        
        int pos=cs;
        int item=arr[cs];
        for(int i=cs+1;i<arr.size();i++)
        {
            if(arr[i]<item)
            {
                 pos++;
            }
                       
        }
         swap(item,arr[pos]);
        if(pos==cs)
        {
            continue;
        }
       
        while(pos!=cs)
        {
          

            pos=cs;
            for(int i=cs+1;i<arr.size();i++)
            {
                if(arr[i]<item)
                {pos++;}
            }
            swap(item,arr[pos]);
           

        }
        coutncyc++;
          
    }
    cout<<"The Number of cycles:"<<  coutncyc<<endl;
}
//For duplicate elements
void duplicate(vector<int>&arr)
{
    for(int cs=0;cs<arr.size()-1;cs++)
    {
        int pos=cs;
        int item=arr[cs];
        for(int i=cs+1;i<arr.size();i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }
            

        }
        if(pos==cs)
        {
            continue;
        }
        while(item==arr[pos])
        {
            pos++;
        }
        swap(item,arr[pos]);
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<arr.size();i++)
            {
                if(arr[i]<item)
                {
                    pos++;
                }}
               
                while(item==arr[pos])
                {
                    pos++;
                }
                swap(item,arr[pos]);

            }

        }
    }



int main()
{
    vector<int>v={20,20,50,40,10,30};
    duplicate(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
