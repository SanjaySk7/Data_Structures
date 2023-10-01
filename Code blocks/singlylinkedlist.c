#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    struct node *head=NULL;
    struct node*newnode=NULL;
    struct node*temp=NULL;
  //function declaration
    struct node* CreateLinkedList(int);
    struct node* InsertAtBeg(struct node*);
    struct node* InsertAtLast(struct node*);
    struct node* InsertAtspec(struct node*);
    struct node* DeleteAtbeg();
    struct node* DeleteAtEnd();
    struct node* DeleteAtSpec();
    int CountNodes();
    void display();
    void Reverse();
//int lastcount;
    void main(){
        int choice=0;
        printf("Enter the number of nodes: ");
        scanf("%d",&choice);
        if(choice<=0){
            printf("Not valid");
        }
        else{
            printf("Creating linked list");
//creating the linked list
            head=CreateLinkedList(choice);
//print the linked list
            display(head);
//inserting node at the starting of linked list
            InsertAtBeg(head);
            display(head);
//inserting node at last
            //InsertAtLast(head);
            //display(head);
//insert at specific position
            //InsertAtspec(head);
            //display(head);
//deletion at beginning
            //DeleteAtbeg(head);
            //display(head);
//delete at end
            //DeleteAtEnd(head);
            //display(head);
//delete at spec
           // DeleteAtSpec(head);
            //display(head);
           CountNodes(head);
           // Reverse(head);
            //display(head);
        }
        getch();
    }


    //creating the linked list
    struct node* CreateLinkedList(int choice){
        int i=0;
    for(i=0;i<choice;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter data: ",i+1);
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
    //printing the linked list
    void display(struct node *head){
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
   // printf("NULL");
    }
    //inserting node at the starting of linked list
    struct node* InsertAtBeg(struct node* newnode){
        int data;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter new node to insert at beg: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        printf("\nNode inserted at the begining: ");
        return head;
    }
    //inserting node at last
    struct node* InsertAtLast(struct node* newnode){
        int data;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter node to insert at last: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;
        printf("\nNode inserted at last successfully");
        return head;
    }
//insert at specific position
    struct node* InsertAtspec(struct node* newnode){
        int pos,i=1;
        printf("\n Enter the position to insert: ");
        scanf("%d",&pos);
       // if(pos<=1){
         //   InsertAtBeg;
        //}
        //else if(pos>CountNodes){
         //   InsertAtLast;
        //}
        //else{
            temp=head;
            while(i<pos){
                temp=temp->next;
                i++;
          }
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the new node to enter at desired position: ");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;
        //}
        return head;
    }
//delete at beginning
    struct node* DeleteAtbeg(){
    temp=head;
    head=head->next;
    free(temp);
    printf("\n Delete 1st node successfully");
    return head;
    }
//delete at end
    struct node* DeleteAtEnd(){
        struct node* prevnode;
        temp=head;
        while(temp->next!=NULL){
            prevnode=temp;
            temp=temp->next;
        }
        //if(temp==head){
          //  head=NULL;
        //}
        //else{
            prevnode->next=NULL;
        //}
        free(temp);
        printf("\nDeletion at end successfully");
        return head;
    }
//delete at spec
    struct node* DeleteAtSpec(){
        struct node* nextnode;
        int pos,i=1;
        printf("\nEnter position to delete: ");
        scanf("%d",&pos);
        temp=head;
        while(i<pos-1){
           // nextnode=temp;
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
        return head;

    }
 int CountNodes(){
    int count=0;
   // printf("\n");
     temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    //printf("The length of linked list is: %d",count);
    return count;
}
void Reverse(){
    int pos,c=0;
    printf("\nEnter the number of nodes to be reversed: ");
    scanf("%d",&pos);
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(c<pos && nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
        c++;


    }
     head->next = nextnode;
     head=prevnode;

    //if(c<CountNodes)
   //     head->next = nextnode;
    //if(nextnode!=NULL)
      //  Reverse(struct node * temp);
//     head=prevnode;
    printf("\nThe reversed linked list is: ");
}


