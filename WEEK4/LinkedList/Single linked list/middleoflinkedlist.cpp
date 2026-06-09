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
//naive solution
void middle(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        cout<<head->val;
        return;
    }
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp=head;
    count =count/2;
    for(int i=0;i<count;i++)
    {
        temp=temp->next;
    }
    cout<< temp->val;
    return ;

}
//slow fast approach 
void middle_self1(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    if(head->next==NULL)
    {
        cout<<head->val<<endl;
        return;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->val;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50);
    head->next->next->next->next->next= new Node(60);
    middle_self1(head);
   
    
}

