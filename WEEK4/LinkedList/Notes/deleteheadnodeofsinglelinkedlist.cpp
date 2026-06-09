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
Node * deletefirst(Node *head)
{
     if(head==NULL)    
     {
        return head;
     }
     if(head->next==NULL)
     {
        return NULL;
     }
    Node *temp=head;
   head=head->next;
   delete temp;
   return head;
  }
  int main()
  {
     Node*head=new Node(5);
    head->next=new Node(15);
      head->next->next=new Node(25);
        head->next->next->next=new Node(35);
       head= deletefirst(head);
        printlist(head);
  }
  //Time complexity of this function is Big O(1)