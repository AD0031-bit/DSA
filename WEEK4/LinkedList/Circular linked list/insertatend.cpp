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
//naive method- time complexity is O(n)
Node *insertatend(Node *head,int x)
{
    Node *newnode=new Node(x);
    if(head==NULL)
    {
        newnode->next=newnode;
        return newnode;;
    }
    if(head->next==head)
    {
        head->next=newnode;
        newnode->next=head;
        head=newnode;
        return head;
    }
    
    Node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;


}
//It takes theta(n)
Node *insert(Node*head,int x)
{
   
    if(head==NULL)
    {
        Node *newnode=new Node(x);
        newnode->next=newnode;
        return newnode;
    }
     Node*newnode=new Node(head->val);
     newnode->next=head->next;
     head->next=newnode;
     head->val=x;
     head=newnode;
     return head;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head; 
    head=insert(head,81);
    printlist(head);

}
