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
int search(Node *head,int x)
{
    Node *temp=head;
    int p=1;
    while(temp!=NULL)
    {
        if(temp->val==x)
        {
            return p;

        }
        else {
            temp=temp->next;
            p++;
        }

    }
    return -1;

    

}
  int main()
  {
     Node*head=new Node(10);
 /*    head->next=new Node(5);
      head->next->next=new Node(20); */
        head->next=new Node(15);
       cout<<search(head,10);
      
  }
  //Time complexity of this function is Big O(1)
  //aux space O(1)
  /*When you have sorted array you can use binary search 
  time complexity becomes O(log n)
  linked list donot allow binary search as we canot find the middle node 
  in O(1) time 
 the binary search can not be executed in  O(log n) time in linked listy
However there are varaitions of linked list 
which do some extra overhead for faster search in sorted linked list 
They are advance list called skip list 
  */