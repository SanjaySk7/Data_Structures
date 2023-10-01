#include<stdio.h>;
#include<stdlib.h>;
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail=NULL;
struct node *temp;
struct node *newnode;
struct node* CreateDoublyLinkedList(int);
void display(struct node *);
struct node* Insertddlbeg(struct node*);
struct node* Insertddlend(struct node*);
struct node* Insertddlspec(struct node*);
int Count(struct node *);
void main(){
    int n,i;
    printf("\nEnter number of nodes in linked list: ");
    scanf("%d",&n);
    if(n<1)
        printf("Invalid option");
    else{
        printf("Creating LinkedList: ");

            head=CreateDoublyLinkedList(n);
            display(head);
            Insertddlbeg(head);
            display(head);
            Insertddlend(head);
            display(head);
            Insertddlspec(head);
            display(head);
            Count(head);
            getch();

    }
}
struct node* CreateDoublyLinkedList(n){
    //struct node *newnode,*temp,*tail;
    int i;
    for(i=0;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ",i+1);
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
        head=temp=newnode;
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
        tail=temp;
    }
    }
    return head;
}
void display(struct node *head){
   // struct node *temp;

    if(head==NULL)
        printf("\nEmpty");
    else{
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    }
}
struct node* Insertddlbeg(struct node *newnode){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter node to enter in start: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    newnode->prev=newnode;
    head=newnode;
    return head;
}
struct node* Insertddlend(struct node *newnode){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter end element: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    return head;

}
struct node* Insertddlspec(struct node *newnode){
    int i=1,pos;
    printf("\n Enter position to insert: ");
    scanf("%d",&pos);
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter new node: ");
    scanf("%d",&newnode->data);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\nElements after inserting: ");
    return head;
}
int Count(struct node* head){
    int i=0,c=0;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}
