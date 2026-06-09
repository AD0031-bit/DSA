#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node*prev;
    Node(int x)
    {
        val=x;
        next=NULL;
        prev=NULL;
    }
};
void printlist(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }}
Node *reverse(Node *head)
{
    Node *temp=NULL;
     Node *curr=head;
    while(curr!=NULL)
    {
       temp=curr->prev;
       curr->prev=curr->next;
       curr->next=temp;

       curr=curr->prev;

    }
    if(temp!=NULL)
    {
        head=temp->prev;
    }
    return head;
}
int main()
{
    Node *head= new Node(10);
    Node *newnode=new Node(20);
    head->next=newnode;
    newnode->prev=head;
    newnode->next=new Node(30);
    newnode->next->prev=newnode;
   head= reverse(head);
    printlist(head);   
}