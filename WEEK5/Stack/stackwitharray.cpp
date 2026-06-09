#include<iostream>
#include<vector>
using namespace std;
class Stack{
    int *arr;
    int top;
    int cap;
    public:
    Stack(int x)
    {
        arr=new int[x];
        cap=x;
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Overflow";
            return ;
        }
        top++;
       arr[top]=x;
      
    }
    int pop()
    {
        if(top==-1)
       {
        cout<<"Underflow";
        return -1;
       }
        int x=arr[top];
       top--;
       
       return x;
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else {
            return false;
        }
    }
    int peek()
    {
        if(top==-1)
       {
        cout<<"Underflow";
        return -1;
       }
        return arr[top];
    } 
    ~Stack()
    {
        delete []arr;
    }   
};
int main()
{
    Stack s(10);
    s.push(15);
    s.push(20);
    s.push(35);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    s.push(5);
     cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}
/*time complexity
Big O(1)->all function 
*/