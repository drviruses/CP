/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};

void displayBinTree();
void printBinTree(node *ptr);


node *root=NULL;

void insert(string s,int v){
    int i=0;
    node *ptr=root;
    node *par=root;
    while(s[i]!='\0'){
        if(s[i]=='L') { par=ptr; ptr=ptr->left;}
        else {par=ptr; ptr=ptr->right;}
        i+=1;
    }
            
            node *p=new node;
            p->data=v;
            p->left=NULL;
            p->right=NULL;
            
            if(s[s.size()-1]=='L') par->left=p;
            else par->right=p;
}

void displayBinTree(){
    printBinTree(root);
}
void printBinTree(node *ptr){

    if(ptr!=NULL){

        printBinTree(ptr->left);

        cout<<"  "<<ptr->data<<"   ";

        printBinTree(ptr->right);
    }
}    
  

int main(){
    int tn,rv;
    cin>>tn>>rv;
    node *p=new node;
    p->data=rv;
    p->left=NULL;
    p->right=NULL;
    root=p;
    tn-=1;
    while(tn--){
        string s;
        int v;
        cin>>s;
        fflush(stdin);
        cin>>v;
        insert(s,v);
    }
    displayBinTree();
    return 0;
}