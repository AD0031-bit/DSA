#include<iostream>
#include<list>//doubly linked list
#include<algorithm>
using namespace std;
struct MyHAsh{
    int Bucket;
    list<int>*table;
    MyHAsh(int a)
    {
        Bucket=a;
        table=new list<int>[a];
    }
    void insert(int key)
    {
        int n=key%Bucket;
        table[n].push_back(key);
    }
    bool search(int key)
    {
         int n=key%Bucket;
         list<int>::iterator it;
        it=table[n].begin();
        while(it!=table[n].end())
        {
            if(key==*it)
            {
                return true;
            }
            it++;
        }
        return false;

    }
    void remove(int key)
    {
        int n=key%Bucket;
        table[n].remove(key);
    }


};

int main()
{
    MyHAsh h(7);
    h.insert(70);
    h.insert(71);
    h.insert(56);
    h.insert(72);
    cout<<h.search(56);
    cout<<h.search(57);
    h.remove(56);
    cout<<h.search(56);
}

