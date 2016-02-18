//developed by harisu fanyui
//smartsoft from smartlab

//stack using linked list to impliment it
#include "stack.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//typedef struct stack *LINK;
struct stack{
	float item;
	LINK next;
};
int N;
LINK head,tail;
LINK newnode(int x,LINK h);
float stackpop();
void stackpush(float num);
int stackfull();
int stackempty();
void stackinit(int a);
void displayStack();


//function to create a new structure to be used in inserting the new element
LINK newnode(int x,LINK h){
	LINK new =malloc(sizeof (*new));
	new->item=x;
	new->next=h;
return new;
}//innitializing new stack
void stackinit(int a){
head=tail=NULL;

}//function to pop items from the stack
float stackpop(){
LINK temp;
float value;
temp=head->next;
value=head->item;
free(head);
head=temp;
return value;
}
//function to push items to stack
void stackpush(float num){
head=newnode(num,head);
}
int stackempty(){
return head==NULL;
}


void displayStack(){
LINK t;
t=head;
while(t!=NULL){
printf("%f",t->item);
t=t->next;
}
}
