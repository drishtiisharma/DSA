#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
    int data;
    node *link;
};

//function to insert node at beginning
void insertatbeg(struct node *&head,int d){
    struct node *ptr=(node*)malloc(sizeof(node));
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    
}

int main(){
    //creating nodes
    node *head=(node*)malloc(sizeof(node));
    node *head2=(node*)malloc(sizeof(node));
    node *head3=(node*)malloc(sizeof(node));
    
    //node 1
    head->data=20;
    head->link=head2;
    
    //node 2
    head2->data=30;
    head2->link=head3;
    
    //node 3
    head3->data=40;
    head3->link=NULL;
    
    //printing the original linked list
    cout<<"the original linked list is:";
    node *ptr=head;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
    

    int data=10;
    insertatbeg(head,data);
    
    //printing the updated linked list
    cout<<"the updated linked list is:";
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    
}
