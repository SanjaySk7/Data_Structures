#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *newnode;
struct node *temp;
//declaring functions
struct node* Createlinkedlist(int);
struct node* InsertAtBeg(newnode);
void display();
void main(){
    int n;
    printf("\nEnter number of nodes: ");
    scanf("%d",&n);
    if(n<0)
        printf("\nInvalid option");
    else{
        head=Createlinkedlist(n);
        display(head);
        InsertAtBeg(head);
    }
}
struct node* Createlinkedlist(int n){
    int i;
    for(i=0;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the node: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
    if(head==NULL)
        head=temp=newnode;
    else{
        temp->next=newnode;
        temp=newnode;

    }
    }
    return head;
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
struct node* InsertAtBeg(newnode){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node to insert beg: ");
    scanf("%d",&newnode->data);

}
