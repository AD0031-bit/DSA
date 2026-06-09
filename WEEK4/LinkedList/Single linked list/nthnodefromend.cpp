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
int node(Node *head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
  
   if(x>count)
   {
    return -1;
   }
    count=count-x;
   temp=head;
   for(int i=0;i<count&&temp!=NULL;i++)
   {
    temp=temp->next;
   }
   
   return temp->val;

}
//Uisng 2 pointer approach 
int node_video (Node *head,int n)
{if(head==NULL)
    {
        return-1;
    }
    Node*slow=head;
    Node *fast=head;
    for(int i=0;i<n;i++)
    {
        if(fast==NULL)
    {
        return -1;
    }
        fast=fast->next;
    }
    
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow->val;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
   /*  head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50); */
    cout<<node_video(head,3);

}
