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
Node *reverse(Node *head,Node *tail)
{
    Node *prev=NULL;
    Node *curr=head;
    Node* stop=tail->next;
    while(curr!=stop)
    {
        Node*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;        
    }
   return prev;;
    
}

Node *reversek(Node *head,int k)
{
if(head==NULL||k<=1)
{
    return NULL;
}
if(head->next==NULL)
{
    return head;
}
Node *l=head;
Node *p=NULL;
Node *newnode=NULL;
Node *newHead = NULL;

Node *prevTail = NULL;
while(l!=NULL)
{
    Node*r=l;
    for(int i=1;i<k && r!=NULL;i++)
    {
        r=r->next;
    }
    if(r==NULL)
    {
         if(prevTail != NULL)
                prevTail->next =l;
            break;
    }
    Node *nextnode=r->next;
    
    Node *temp=reverse(l,r);
    if(newHead==NULL)
    {
        newHead=temp;
    }
     if(prevTail != NULL)
    {
        prevTail->next=temp;
    }

       l->next=nextnode;
       prevTail=l;
    l=nextnode;
 
}

return newHead;
}


int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
   head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50); 
    head->next->next->next->next->next= new Node(60); 
   head=reversek(head,3);
   printlist(head);

}
