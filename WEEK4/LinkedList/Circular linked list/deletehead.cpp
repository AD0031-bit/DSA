#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int d)
    {
        val=d;
        next=NULL;
    }

};
void printlist(Node *head)
{
    Node *temp=head;
    if(head==NULL)
    {
        return;
    }
    do{
        cout<<temp->val<<" ";
        temp=temp->next;

    }
    while(temp!=head);
}
Node*removehead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;//chnage
        return NULL;
    }
    Node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    Node *var=head;
    temp->next=head->next;
    delete head;
    head=temp->next;
    return head;
}
Node *remove(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    Node *temp=head->next;
    head->val=head->next->val;
    head->next=temp->next;
    delete temp;
    return head;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head; 
    head=remove(head);
    printlist(head);

}
