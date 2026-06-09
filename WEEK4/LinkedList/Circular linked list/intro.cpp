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
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        cout<<head->val;
        return;
    }
    Node *temp= head;
    cout<<temp->val<<" ";
    temp=head->next;

    while (temp!=head)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
}
void method2(Node *head)
{
    Node *temp=head;
    if(head==NULL)
    {
        return;
    }
    do{
        cout<<temp->val<<endl;
        temp=temp->next;

    }
    while(temp!=head);
}
int main()
{
    Node *head=new Node(10);
  /*   head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head; */
    method2(head);

}
