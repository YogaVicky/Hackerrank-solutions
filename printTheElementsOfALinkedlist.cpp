#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head = NULL;
void insert(int data){
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL)
		head = temp;
	else{
		node *thead = head;
		while(thead->next != NULL)
			thead = thead->next;
		thead->next = temp;
	}
}
void printList(){
	node *thead = head;
	while(thead != NULL){
		cout<<thead->data<<endl;
		thead = thead->next;
	}
}
int main(){
	int n , a , i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		insert(a);
	}
	printList();
	return 0;
}