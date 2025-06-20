#include<stdio.h>
int main() {
    int a;
    printf("Enter numbers :");
    scanf("%d",&a);
    if(a>=0) {
        printf("+ve");
    }else {
        printf("-ve");
    }
    return 0;
}