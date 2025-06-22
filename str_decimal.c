#include<stdio.h>

int strbinary(char str[]) {
    int i=0;
    int result =0;

    while(str[i]!='\0') {
        if(str[i]>='0' && str[i]<='9') {
            result = result * 10 +(str[i]-'0');
        } else {
            printf("Inavlid ");
            return -1;
        }
        i++;
    }
    return result;
}
int main() {
    char str[100];
    printf("Enter a str : ");
    scanf("%s",str);
    int number = strbinary(str);
    if(number!= -1) {
        printf("Convert%d\n",number);
    }
    return 0;
}