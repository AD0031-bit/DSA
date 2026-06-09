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
//Assumption:No of Node>=K
Node*removeK(Node *head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(k==1)
    {
    Node *temp=head->next;
    head->val=head->next->val;
    head->next=temp->next;
    delete temp;
    return head;

    }
    Node *temp=head;
    for(int i=1;i<k-1;i++)
    {
        temp=temp->next;
    }

    Node *var=temp->next;
    temp->next=temp->next->next;;
    delete var;
   
    return head;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head; 
    head=removeK(head,2);
    printlist(head);

}
