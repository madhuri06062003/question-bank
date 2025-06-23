Array of pointer : It is a collection where each element is a pointer
Syntax : data_type *array_name[size];
Example :
#include<stdio.h>
int main() {
    char *numbers[]={"1","2"};
    int i;

    for(i=0;i<2;i++) {
        printf("%s\n",numbers[i]);
    }
    return 0;
}

Pointer of array : Points the entire array not a single element 
Syntax : data_type (*pointer_name)[size];
Example :
#include<stdio.h>
int main() {
    int n[]={1,2,3,4,5};
    int (*p)[5]=&n;
    int i;

    for(I=0;i<5;;i++) {
        printf("%d",(*p)[i]);
    }
    return 0;
}