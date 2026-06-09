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
Node * insertinstart(Node *head)
{
    int x;
    cout<<"Enter the value:";
    cin>>x;
    Node *temp=new Node(x);
    temp->next=head;
    return temp;

}

int main()
{
    Node *head=NULL;
  
   head= insertinstart(head);
    head= insertinstart(head);
     head= insertinstart(head);
    printlist(head);

}
//time complexity is constant big O(1)