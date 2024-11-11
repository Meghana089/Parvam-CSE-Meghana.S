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
    void insert_at_begin(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));//local variable newnode
    int value;
    printf("Enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->next=head;
    tail=newnode;
    }
    
void insert_at_end(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));//local variable newnode
    int value;
    printf("Enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;
}
void delete_at_front(){
    struct node*temp=head;
    head=head->next;
    free(temp);
}
void delete_at_end(){
    struct node*ptr=head;while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}
void display(){
    struct node *ptr3=head;
    while(ptr3!=NULL){
        printf("%d",ptr3->data);
        ptr3=ptr3->next;
    }
}
int main(){
    int choice;
    do{
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            create();
            break;
            case 2:
            insert_at_begin();
            break;
            case 3:
            insert_at_end();
            break;
            case 4:
            delete_at_front();
            break;
            case 5:
            delete_at_end();
            break;
            case 6:
            display();
            break;
            default:
            printf("Invalid choice\n");

        }
    }
    while(choice!=0);
    return 0;
}
