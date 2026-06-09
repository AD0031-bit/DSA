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
int search(Node *head,int x,int p=1)
{
   
    if(head==NULL)
    {
        return -1;
    }
    if(head->val==x)
    {
        return p;
    }
    else{
       return  search(head->next,x,p++);
    }
    //time complexity O(n)
    //Aux space O(n+1) - recursion stack 

}
int main()
{
  
     Node*head=new Node(10);
    head->next=new Node(5);
      head->next->next=new Node(20);
        head->next=new Node(15);
       cout<<search(head,10);
      


}