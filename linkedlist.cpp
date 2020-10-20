#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

class list
 {
        
    public:
        node *head, *tail;
        list()
        {
        head=NULL;
        tail=NULL;
        }
           void createnode()
    {
      int value;
      cin>>value;
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }

      void display()
  {
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"--->";
      temp=temp->next;
    }
  }

   void insert_start(int value)
  {
    node *temp=new node;
    temp->data=value;
    temp->next=head;
    head=temp;
  }

    void insert_position()
  {
    int pos, value;
    cout<<"Position:";
      cin>>pos;
    cout<<"\nValue:";
      cin>>value;

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

    void delete_position()
  {
    int pos;
    cin>>pos;
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
 }l;




int main(){
  int ch;
  while(1)
 { cout<<"\n1. Wants to input in the linked list\n";
  cout<<"2. Wants to delete at a particular position\n";
  cout<<"3. Wants to delete the last node\n";
  cout<<"4. wants to delete the head node or first node\n";
  cout<<"5. Wants to insert at a particular position\n";
  cout<<"6. Wants to insert at the begining\n";
  cout<<"7. want to display linked list\n";
  cout<<"8. want to exit\n ";
  cin>>ch;

  switch(ch)
     {
        case 1:  l.createnode();
                 break;
        case 2:  l.delete_position();
                 break;
        case 5:  l.insert_position();
                 break;         
        case 7:  l.display();
                 break; 
        case 8:  exit(1);
                 break;                 
        default: cout<<"wrong input";
                                   
     }
 }   
    return 0;
}