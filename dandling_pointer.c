Dangling pointer: it is a pointer that hold the memory address after that has been deleted
Example :
#include<stdio.h>
int* danpointer() {
    int x=10;
    return &x;
}
int main() {
    int *ptr=danpointer();
    printf("%d",*ptr);
    return 0;
}