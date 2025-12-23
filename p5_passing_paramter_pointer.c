// passing parameter as pointers
// what we find in fn paramter passing we will repeat mistake

#include<stdio.h>
void fun(int *ptr)
{
    *ptr = *ptr + 5;
}

int main(){
    int x = 10;
    fun(&x);
    printf("%d\n",x);
    return 0;
}