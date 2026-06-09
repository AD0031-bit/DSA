#include<iostream>
using namespace std;
struct Node{
    Node *next;
    int val ;
    Node(int x)
    {
        next=NULL;
        val=x;

    }
};
void printlist(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
bool loop_self(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }
      
    }
    return false;

}
