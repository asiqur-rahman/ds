#include<bits\stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Singly_linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void insert(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    void display()
  {
    node *tmp=new node;
    tmp=head;
    while(tmp!=NULL)
    {
      cout<<tmp->data<<"\t";
      tmp=tmp->next;
    }
  } 
  
  void insert_start(int value)
  {
    node *temp=new node;
    temp->data=value;
    temp->next=head;
    head=temp;
  }
  
  void insert_position(int pos, int value)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;	
    temp->next=cur;
  }
  
  void delete_first()
  {
    node *temp=new node;
    temp=head;
    head=head->next;
    delete temp;
  }
  
  void delete_last()
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    while(current->next!=NULL)
    {
      previous=current;
      current=current->next;	
    }
    tail=previous;
    previous->next=NULL;
    delete current;
  }
  
  void delete_position(int pos)
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  }
};

int main()
{
    Singly_linked_list a;
    a.insert(1);
    a.insert(2);
    a.display();
    return 0;
}
