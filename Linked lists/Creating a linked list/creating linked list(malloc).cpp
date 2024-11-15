//creating a linked list by using malloc
#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	node *link;
};

void countnodes(node *head){
	int count=0;
	if(head==NULL){
		cout<<"linked list is empty";
		return;
	}
	node* ptr=head;
	while(ptr!=NULL){
		count++;
		ptr=ptr->link;
	}
	cout<<count<<endl;
}

int main(){
	
	//node declaration
	
	node *head=(node*)malloc(sizeof(node));
	node *head2=(node*)malloc(sizeof(node));
	node *head3=(node*)malloc(sizeof(node));
	
	//first node
	head->data=45;
	head->link=head2;
	
	
	//second node
	head2->data=47;
	head2->link=head3;
	
	//third node
	head2->data=48;
	head3->link=NULL;
	
	//calling the function
	countnodes(head);
	return 0;


//freeing memory(optional)	
// 	free(head3);
// 	free(head2);
// 	free(head);
}


