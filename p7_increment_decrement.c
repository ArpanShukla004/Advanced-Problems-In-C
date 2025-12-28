// we will learn about increment and decrement operations on pointers in C.


#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; 
    printf("%d %p\n", *ptr, ptr);
    ptr++;
    ptr++;
    printf("%d %p\n", *ptr, ptr);
    ptr--;
    ptr--;
    printf("%d %p\n", *ptr, ptr);
    return 0;
}