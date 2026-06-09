#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;

    Node(int a)
    {
        val=a;
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
Node * deletelast(Node *head)
{
     if(head==NULL)
     {
        return NULL;
     }
     if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
     Node *temp=head;
     while(temp->next->next!=NULL)
     {
        temp=temp->next;
     }
Node *temp2=temp->next;
temp->next=NULL;
delete temp2;
return head;

  }
  int main()
  {
     Node*head=new Node(5);
    head->next=new Node(15);
      head->next->next=new Node(25);
        head->next->next->next=new Node(35);
       head= deletelast(head);
        printlist(head);
  }
  //Time complexity of this function is Big O(m)