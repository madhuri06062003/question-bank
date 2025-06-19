#include<stdio.h>
int main() {
    int num,originalnum,reversenum=0,remainder;
    printf("Enter number : ");
    scanf("%d",&num);

    originalnum=num;
    while(num!=0) {
        remainder=num%10;
        reversenum=reversenum*10+remainder;
        num=num/10;
    }
    if(originalnum==reversenum) {
        printf("%d is a palindrom",originalnum);
    } else {
        printf("%d is not a palindrom",originalnum);
    }
    return 0;

}