#include<stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);

    if((a^b)==0) {
        printf("Equal\n");
    } else {
        printf("Not equal");
    }
    return 0;
}