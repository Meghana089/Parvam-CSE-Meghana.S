#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*head=NULL,*tail=NULL;// global variable
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));//local variable newnode
    int value;
    printf("Enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}