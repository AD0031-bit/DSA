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
void printlist(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
Node *insertk(Node *head,int val)
{
   
    Node *newnode=new Node(val);
     if(head==NULL)
    {
        return newnode;
    }
    if(val<head->val)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL&&val>temp->next->val)//it should be temp->next->val to stop just before 
    {
        temp=temp->next;
    }
    /* if(temp->next==NULL)
    {
        temp->next=newnode;
        return head;
    } */
    
    newnode->next=temp->next;
    temp->next=newnode;
    return head;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next= new Node(40);
    head=insertk(head,5);
    printlist(head);
    
}
//time complexity first pos ->constant time
//after last node theta(n)
// in general time complexity theta(position)
