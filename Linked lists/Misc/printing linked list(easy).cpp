#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *link;
};

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
    cout<<"The linked list is: ";
    node *ptr=head;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
    
 
}
