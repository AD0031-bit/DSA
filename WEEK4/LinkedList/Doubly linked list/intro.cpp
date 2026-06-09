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
    }
}
int main()
{
    Node *head= new Node(10);
    Node *newnode=new Node(20);
    head->next=newnode;
    newnode->prev=head;
    newnode->next=new Node(30);
    newnode->next->prev=newnode;
    printlist(head);   

}