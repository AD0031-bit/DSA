#include<iostream>
#include<algorithm>
#include<list>
#include<unordered_set>
using namespace std;
//Bucket size-number of elements in hash table 
//Bucket size is an input 
// Using the stl -standard libraray 
struct hashs{
    int BUCKET;
    list<int>*table;
    hashs(int b)
    {
        BUCKET=b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%BUCKET;
        table[i].push_back(key);

    }
    void remove(int key)
    {
        int i=key%BUCKET;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i=key%BUCKET;
        for(auto x:table[i])
        {
            if(x==key)
            {
                return true;
            }}
            return false;
        

    }
    
};
int main()
{
    hashs h(7);
    h.insert(70);
    h.insert(71);
    h.insert(5);
    h.insert(72);
    h.insert(56);
    cout<<h.search(70);
    h.remove(70);
    cout<<h.search(70);
    cout<<h.search(56);



}