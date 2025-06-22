#include<stdio.h>
#include <string.h>

int convert(char *string) {
    int slen=strlen(string);
    int total =0;
    int decimalval=1;

    for(int i =(slen-1);i>=0;i--) {
        if(string[i]=='1') 
            total = total +decimalval;
            decimalval=decimalval*2;
    }
    return total;
}
int main() {
    char str[]="10101";
    int var = convert(str);
    printf("s1 in decimal :%d\n", var);
    return 0;
}