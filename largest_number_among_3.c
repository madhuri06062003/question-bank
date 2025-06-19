#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);
    printf("Enter num3: \n");
    scanf("%d",&num3);

    if(num1>=num2 && num1>=num3) {
        printf("%d",num1);
    } else if(num2>=num1 && num2>=num3) {
        printf("%d",num2);
    } else {
        printf("%d\n",num3);
    }
    return 0;
}