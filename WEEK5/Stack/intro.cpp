#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int>v;
    public:
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
       int x=v.back();
       v.pop_back();
       return x;
    }
    int size()
    {
        return v.size();
    }
     int peek()
    {
        return v.back();
    }
    bool isEmpty()
    {
       return v.empty();}
     
};
int main()
{
    Stack s;
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
push pop ->avg time complexity is O(1)

*/