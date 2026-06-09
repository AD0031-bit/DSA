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
int main()
{

Node *head=new Node(10);
Node *temp=head;
for(int i=2;i<=4;i++)
{

 temp->next=new Node(i*10);
 temp=temp->next;
}

temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<" ";
    temp=temp->next;
}

}
/* Important example 
void printlist(Node *head)
{
    while(head!=NULL)
    cout<<head->data<<" ";
    head=head->next;
}
int main()
{
Node *head=new Node(10);
printList(head);
printlist(head);
return 0;
}
The ouptu of this code will be :
10 10
How does this work?
In cpp when you pass a pointer to the function 
the arguement passed in the function and the 
variable in main are both different 
They both have address of same memory loaction 
Like normal integer functions the pointer 
variable also get copied when we make a function call
Only local head variable is modified

*/