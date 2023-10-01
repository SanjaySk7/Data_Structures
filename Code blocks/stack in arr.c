#include<stdio.h>
#include<stdlib.h>
//int n=5;
int stack[5];
int top=-1;
void main(){
    int choice;
    do{
        int menu;
         printf("\n\n------MENU------\n");
         printf("1.Push item\n2.Pop item\n3.Peek top\n4.Display stack\n");
         printf("Enter your choice to perform operation:");
         scanf("%d",&menu);

    switch(menu){
    case 1: push();
            break;
    case 2: pop();
            break;
    case 3: peek();
            break;
    case 4: display();
            break;
    default :printf("\nWrong choice");
    }
    printf("\nDo you want to continue?(1/0: )");
    scanf("%d",&choice);
    }
    while(choice==1);
    //getch();
}
void push(){
    int a;
    printf("\nEnter data: ");
    scanf("%d",&a);
    if(top==6)
        printf("\nOverflow");
    else{
        top++;
        stack[top]=a;
    }
    printf("\nElement pushed into stack successfully");
}
void pop(){
    int a;
    if(top==-1){
        printf("Underflow");
    }
    else{
        a=top;
        top--;
    }
    printf("\nThe poped element is: %d",stack[a]);
}
void peek(){
    int a;
    if(top==-1)
        printf("\nStack is empty");
    else
        printf("\nTop most element on stack is: %d",stack[top]);
}
void display(){
    int i,count=0;
    for(i=top;i>=0;i--){
        printf("\nThe elements in stack are: %d",stack[i]);
        count++;
    }
    printf("\nTotal elements in stack are: %d",count);
}
