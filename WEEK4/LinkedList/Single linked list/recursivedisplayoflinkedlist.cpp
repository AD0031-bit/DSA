#include<iostream>
using namespace std;
struct Node 
{
    int val;
    Node *next;
    Node (int x)
    {
        val=x;
        next=NULL;
    }
};
void rec(Node *head)
{
    if(head!=NULL)

   { cout<<head->val<<" ";
    rec(head->next);}
    else {
        return ;
    }

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    rec(head);

}
// This will take the time complexity of Big O (n)
// Auxillary space Big  O(n)auxlliary space->due to function call stack
