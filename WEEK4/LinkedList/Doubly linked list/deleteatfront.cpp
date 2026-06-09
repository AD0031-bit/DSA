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
Node* remove(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;//changes by chatgpt
        return NULL;
    }
    Node* temp=head;
    head=temp->next;
    head->prev=NULL;//changes by chatgpt
    delete temp;
    return head;

}
//time complexity as O(1)
int main()
{
    Node *head= new Node(10);
    Node *newnode=new Node(20);
    head->next=newnode;
    newnode->prev=head;
    newnode->next=new Node(30);
    newnode->next->prev=newnode;
   head= remove(head); 
    printlist(head); 

}