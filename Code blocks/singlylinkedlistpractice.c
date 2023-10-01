#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *temp=NULL;
struct node *newnode=NULL;
struct node *CreateLinkedList(int);
void Reverse(struct node*);
void display(struct node*);
void getlength(struct node*);
void main(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    if(n<0)
        printf("Invalid choice");
    else{
        printf("\nCreating Linked List");
        head=CreateLinkedList(n);
        display(head);
        getlength(head);
        Reverse(head);
        display(head);
    }

}
struct node *CreateLinkedList(int n){
    int i;
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data: ");
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
void display(struct node* head){
    printf("\nThe nodes are: ");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void getlength(struct node* temp){
    int count=0;
    printf("\n");
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("The length of linked list is: %d",count);
}
void Reverse(struct node* temp){
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}
