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
//For naive part use the vector 
//add data to vector then use arr.back()and arr.pop_back()
//to reevere the array
Node * reverse(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        return head;
    }
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
   /*  head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50); */
    head=reverse(head);
    printlist(head);

}
