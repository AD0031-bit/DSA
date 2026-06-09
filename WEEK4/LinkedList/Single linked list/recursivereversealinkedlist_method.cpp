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
void printlist(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
Node*reverse(Node *head,Node *prev)
{
    if(head==NULL)
    {
        return prev;
    }
    Node *temp=head->next;
    head->next=prev;
  return reverse(temp,head);
   
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
   /*  head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50); */
    head=reverse(head,NULL);
    printlist(head);

}
