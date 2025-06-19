#include<stdio.h>
int main() {
    int a,b,var;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a,&b);
    printf("Enter variable : \n");
    scanf("%d",&var);
    var = a;
    a = b;
    b = var;
    printf("After swapping :\n");
    printf("a=%d b=%d",a,b);
    return 0;
}