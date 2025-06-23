/*Pointer : Stores memory address of another variable
Example:*/
#include<stdio.h>
int main() {
    int a=10;
   int *ptr=&a;

    printf("Value of a :%d\n",a);
    printf("Value of ptr :%p\n",ptr);
    printf("Address of a :%p\n",(void *)&a);
    printf("Address of ptr :%d\n",*ptr);

    return 0;
}