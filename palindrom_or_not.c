#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i,len,ispalindrom =1;
    printf("Enter a str : ");
    scanf("%s",str);

    len = strlen(str);
    for(i=0;i<len/2;i++) {
        if(str[i]!=str[len-1-i]) {
        ispalindrom=0;
        break;
    }
}
if(ispalindrom) {
    printf("palindrom");
} else {
    printf("Not palindrom");
}
return 0;
}