#include<stdio.h>
int main() {
    int inttype;
    char chartype;
    float floattype;
    double doubletype;

    printf("int size=%zu bytes \n",sizeof(inttype));
    printf("char size=%zu bytes \n",sizeof(chartype));
    printf("float size=%zu bytes \n",sizeof(floattype));
    printf("double size=%zu bytes \n",sizeof(doubletype));

    return 0;
}