#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 256

int anagrams(char str1[],char str2[]) {
    int count[SIZE]={0};
    if(strlen(str1)!=strlen(str2))
    return 0;
for(int i=0;str1[i]&&str2[i];i++) {
    count[tolowe(str1[i])]++;
    count[tolower(str2[i])]++;
}
for(int i=0;i<SIZE;i++) {
    if(count[i]!=0)
    return 0;
}
return 1;
}
int main() {
    char str1[100],str2[100];
    printf("Enter str1:");
    scanf("%d",str1);
    printf("Enter str2:");
    scanf("%d",str2);

    if(anagrams(str1,str2)){
        printf("The str are anagrams");
    } else {
        printf("The str are not anagrams");
    }
    return 0;
}