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
Node * removeduplicate(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *temp=head;
    while(temp!=NULL&&temp->next!=NULL)
    {
        if(temp->val==temp->next->val)
        {
            Node *var=temp->next;
            temp->next=temp->next->next;
            delete var;
            continue;
        }
        temp=temp->next;

    }
    return head;
}
//This function will never midify the head so head will never be changed 
int main()
{
    Node *head=new Node(10);
    head->next=new Node(10);
   
    head=removeduplicate(head);
    printlist(head);

}
