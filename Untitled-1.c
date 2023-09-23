#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;

};
struct node * creating(int data){
	struct node* a = malloc(sizeof(struct node*));
	if(a==NULL){
		printf("memory allocation is failed");
		exit(-1);
	}
	a->data= data;
	a->next = NULL;
	return a;

}
int main(){
	int a = 12;
	int b = 23;
	struct node* head = creating(a);
	printf("%d",*head);
	struct node* secand = creating(b);
	printf("%d",*secand);
}