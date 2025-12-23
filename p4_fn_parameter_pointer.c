// function paramter and pointers in c

#include<stdio.h>
void function(int x)
{
    x = x + 5;
}

int main(){
    int x = 10;
    function(x);
    printf("%d\n",x);
    return 0;
}