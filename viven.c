#include<stdio.h>
#include<ctype.h>
int main() {
    char str[100];
    int sum=0;
    printf("Enter a str:");
    scanf("%s",str);
    
    for(int i=0;str[i]!=0;i++) {
        if(isdigit(str[i])) {
            sum =sum+str[i]-'0';
        }
    }
    printf("Sum of digit :%d\n",sum);
    return 0;
}