#include<iostream>
using namespace std;

/*class Node
{
    public:
    int val;
    Node *next;//Self referential structure
    
    Node(int x)
    { 
        val=x;
        next =NULL;  
    }
   
};*/
struct Node{
    int val;
    Node *next;
    Node(int a)
    {
        val=a;
        next=NULL;
    }

};
int main()
{
    Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
    Node *t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->val<<" ";
        t=t->next;
    }
}