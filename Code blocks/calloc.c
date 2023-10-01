#include<stdio.h>;
#include<stdlib.h>
int main(){
    int n,i;
    float *ptr;
    scanf("%d",&n);
    ptr=(float *)calloc(n,sizeof(float));
      for(i=0;i<n;i++){
        scanf("%f",(ptr+i));
    }
    for(i=0;i<n;i++){
        printf("%f \t",*(ptr+i));
    }
    free(ptr);
    return 0;
}
