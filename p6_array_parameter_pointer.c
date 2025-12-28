// array paramter and pointers in c very good example in c 






// #include<stdio.h>
// int main(){
//     int arr[] = {10,20,30,40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i < n ; i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// void fun(int arr[])
// {
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     fun(arr);
//     return 0;
// }
#include<stdio.h>
void fun(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++)
        printf("%d\n",arr[i]);
}
int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    fun(arr);
    return 0;
    }
