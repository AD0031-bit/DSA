#include<iostream>
using namespace std;
//NAive solution
/* class TwoStack{
    int *arr;
    int cap;
    int top1;
    int top2;
    public:
    TwoStack(int n)
    {
        cap=n;
        arr=new int[n];
        top1=-1;
        top2=n/2;
    }
    void push1(int x)
    {
        if(top1==cap/2)
        {
            cout<<"overflow";
            return;
        }
          top1++;
        arr[top1]=x;
      

    }
    void push2(int x)
    {
        if(top2==cap)
        {
            cout<<"overflow";
            return;
        }
         top2++;
        arr[top2]=x;
       

    }
    int pop1()
    {
        if(top1==-1)
        {
            cout<<"underflow";
        }
        top1--;

    }
    int pop2()
    {
        if(top2==cap/2)
        {
            cout<<"underflow";
        }
        top2--;

    }
    int size1()
    {
        return top1;
    }
    int size2()
    {
        return top2;
    }

};
 */
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int cap;
    public:
    TwoStack(int x)
    {
        arr=new int[x];
        cap=x;
        top1=-1;
        top2=cap;

    }
    bool push1(int x)
    {
        if(top1<top2)
        {
            top1++;
            arr[top1]=x;;
            return true;
        }
        return false;
    }
     bool push2(int x)
    {
        if(top1<top2)
        {
            top2--;
            arr[top2]=x;;
            return true;
        }
        return false;
    }
    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1];
            top1--;
            return x; }
return NULL;
    }
 int pop2()
    {
        if(top2<cap)
        {
            int x=arr[top2];
            top2++;
            return x; }
return NULL;
    }
    int size1()
    {
        return top1+1;
    }
    int size2()
    {
        return cap-top2;
    }


};
/*Time complexity is O(1) here*/