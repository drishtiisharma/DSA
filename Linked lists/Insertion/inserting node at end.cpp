#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *link;
};

//creating a function to insert a node at the end of the linked list
void insertatend(struct node *head,int data){
    struct node *ptr=head;
    ptr=head;
    //creating a new node
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
    
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void printdata(struct node *head){
    if(head==NULL){
        cout<<"The linked list is empty";
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        cout<<" ";
        ptr=ptr->link;
    }
}

int main(){
    //creating nodes using malloc
    node *head=(node*)malloc(sizeof(node));
    node *head2=(node*)malloc(sizeof(node));
    node *head3=(node*)malloc(sizeof(node));
    
    //first node
    head->data=10;
    head->link=head2;
    
    //second node
    head2->data=20;
    head2->link=head3;
    
    //third node
    head3->data=30;
    head3->link=NULL;
    
    cout<<"A linked list has been created."<<endl;
    //printing original
    cout<<"Original linked list: ";
    printdata(head);
    
    cout<<endl;
    
    //inserting at end
    insertatend(head,40);
    
    //printing new
    cout<<"New linked list:  ";
    printdata(head);
    
 
}
