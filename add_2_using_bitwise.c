#include<stdio.h>
int addusingbitwise(int a,int b) {
    int carry;
    while(b!=0) {
        carry = a&b;
        a=a^b;
        //carry is shifted by one so that add and give it req sum
        b=carry<<1;
    }
    return a;
}
int main() {
    int num1,num2,result;
    printf("Enter numbers :");
    scanf("%d %d",&num1,&num2);
    result = addusingbitwise(num1,num2);
    printf("sum =%d\n",result);
    return 0;
}