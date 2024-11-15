// program to output the number of nodes in a linked list without the use of malloc

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
	//first node
	node *head=new node();
	head->data=45;
	head->link=NULL;
	
	
	//second node
	node *head2=new node();
	head2->data=98;
	head2->link=NULL;
	head->link=head2;
	
	//third node
	node *head3=new node();
	head3->data=100;
	head3->link=NULL;
	head2->link=head3;
	
	countnodes(head);
	return 0;
}


