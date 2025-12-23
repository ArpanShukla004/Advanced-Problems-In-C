// size of pointer using sizeof operator


#include<stdio.h>
int main(){
    int *p1;
    char *p2;
    double *p3;
    printf("%zu\n",sizeof(p1));
    printf("%zu\n",sizeof(p2));
    printf("%zu\n",sizeof(p3));
    return 0;
}