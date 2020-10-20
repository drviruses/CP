#include<bits/stdc++.h>

using namespace std;

struct node{
   public:
    string bname;
    node *next;
};
node *head=NULL;
node *tail=NULL;

void insert(){
    
    node *temp=new node;
    cin>>temp->bname;
    temp->next=NULL;    
    if(head==NULL){
        head=temp;
        tail=temp;
        temp=NULL;
    }
    else{
        tail->next=temp;
        tail=temp;
        temp=NULL;
    }
    return;
}

void display(){
    node *temp=new node;
    temp=head;
    while(temp!=NULL){
        cout<<temp->bname<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    
    int n;
    cin>>n;
    for(auto i=0;i<n;i++){
        cout<<"Enter the book name: ";
        insert();}
    display();

    return 0;
}