#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *link;
};

//creating a function to print the data
void printdata(struct node *head){
    if(head==NULL){
        cout<<"The linked list is empty";
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
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
    cout<<"The elements of the linked list are: ";
    //invoking the function
    printdata(head);
    
 
}
