#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *link;
};

//function to count the number of nodes
void countnodes(struct node *head){
    int count=0;
    if(head==NULL){
        cout<<"The linked list is empty";
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    cout<<"The number of nodes in the linked list are: "<<count<<endl;
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
    cout<<"Counting the number of nodes now..."<<endl;
    
    //invoking the function
    countnodes(head);
}
