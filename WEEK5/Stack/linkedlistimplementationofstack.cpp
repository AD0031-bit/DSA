#include<iostream>
using namespace std;
/* struct Node{
    int val;
    Node *next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
//thsi with time complexity O(n)
class Stack1{
    Node *head;
    public:
    Stack1()
    {
        head=NULL;
    }
    void push(int v)
    {
        Node *newnode=new Node(v);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    int pop()
    {
        if(head==NULL)
        {
            cout<<"Underflow";
            return -1;
        }
        if(head->next==NULL)
        {
            int x=head->val;
            delete head;
            head=NULL;
            return x;
        }
        Node *temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node *var=temp->next;
        temp->next=NULL;
        int x=var->val;
        delete var;
        return x;    
        
    }
    int peek()
    {
         if(head==NULL)
        {
            cout<<"Underflow";
            return -1;
        }
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        return temp->val;

    }
    int size()
    { if(head==NULL)
        {
            
            return 0;
        }
        int count=0;
        Node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    bool isEmpty()
    {
        if(head==NULL)
        {
            return true;
        }
        else{
            return false;
        }

    }
}; */
struct Node{
    int val;
    Node *next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
class Stack{
    Node *head;
    int count;
    public:
    Stack()
    {
        head=NULL;
        count=0;
    }
    void push(int v)
    {
        Node *newnode=new Node(v);
        newnode->next=head;
        head=newnode;
        count++;
    }
    int pop()
    {
        if(head==NULL)
        {
            cout<<"Underflow";
            return -1;
        }
     
       Node *var=head;
       head=head->next;
       int x=var->val;
       delete var;
       count--;
       return x;        
    }
    int peek()
    {
         if(head==NULL)
        {
            cout<<"Underflow";
            return -1;
        }
        
        return head->val;

    }
    int size()
    { 
      
        return count;
    }
    bool isEmpty()
    {
       return head==NULL;
    }

    
};
// time complexity O(1)-worst case  
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    s.push(40);
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}