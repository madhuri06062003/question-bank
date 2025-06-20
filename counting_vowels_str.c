#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    int count =0;
    int i;
    char str[100];

    printf("Enter a str :");
    fgets(str,sizeof(str),stdin);

    for (i=0;i<strlen(str);i++) {
        switch (toupper(str[i])) {
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
            count++;
        }
    }
    printf("vowels :%d\n",count);
    return 0;

}