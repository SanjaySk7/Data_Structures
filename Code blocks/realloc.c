#include<stdio.h>;
#include<stdlib.h>;
int main(){
    int n,i,*ptr;
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    scanf("%d",&n);
    int *ptr1=(int *)realloc(ptr,n*sizeof(int));
    printf("%d,%d  \n",ptr,ptr1);
   // for(i=0;i<n;i++){
      //  scanf("%d",(ptr1+i));
    //}
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr1+i));
    }
    free(ptr1);
}
