#include<iostream>
using namespace std;
// We can insert upto size +1 if it is beyond that then do not chage the linked list
struct Node{
    int val;
    Node *next;
    static int size;
    Node(int a)
    {
        val=a;
        next=NULL;
        size++;
    }
};
int Node::size=0;
Node *insertatpos(Node *head, int x,int p)
{Node *newnode=new Node(x);
    if(p==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    if(p>(Node::size)+1)
    {
        return head;

    }
    int count =1;
   Node *temp=head;
    while(temp!=NULL)
    {
        if(count+1<p)
        {
           
            count ++;
             temp=temp->next;
        }
        else {
            break;
        }
    }
    
    newnode->next=temp->next;
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
    Node*head=new Node(5);
    head->next=new Node(15);
      head->next->next=new Node(25);
        head->next->next->next=new Node(35);

      head=insertatpos(head,10,7);
      printlist(head);
      


}