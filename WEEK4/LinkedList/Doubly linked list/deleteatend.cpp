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
   Node *temp=head;
   while(temp->next!=NULL)
   {

    temp=temp->next;
   }
   temp->prev->next=NULL;
    temp->prev=NULL;
    delete temp;
   return head;

}
//time complexity of this solution is Theta(n)