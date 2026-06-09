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
Node * insertatend(Node *head,int x)
{
    //Null case of head is necessary 
    if (head==NULL)
    {
         Node *newnode=new Node(x);
   newnode->next=NULL;
    return newnode;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node *newnode=new Node(x);
    temp->next=newnode;
    return head;
}
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
  
    Node *head=new Node(10);
    head=insertatend(head,20);
    head=insertatend(head,30);
    printlist(head);


}

