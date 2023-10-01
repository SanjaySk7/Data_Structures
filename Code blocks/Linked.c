#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
    struct node*head=NULL;
    struct node*temp=NULL;
    struct node*newnode=NULL;

void CreateLinkedList();
void display();
void print();

void main(){
    CreateLinkedList();
    print();
    display();
    getch();
}
void CreateLinkedList(){
    int input;
    int k=1;
    scanf("%d",&input);
    while(k==1){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=input;
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        if(input==00){
            k=0;
        }
        else{
            k=1;
            scanf("%d",&input);
        }
    }
}
void print(struct node* head){
    temp=head;
    if(head!=NULL){
        int k;
    scanf("%d",&k);
    while(k>0){
        //printf;
        if(k==1){
            temp->next=NULL;
        }
        else
        temp=temp->next;
        k--;
    }
    }
}
void display(struct node *head){
    temp=head;
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }

}
