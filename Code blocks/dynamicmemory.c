#include <stdio.h>;
int main(){
    int n,i,*ptr;
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++){
        printf("%d \t",*(ptr+i));
    }
    free(ptr);
    return 0;
}
