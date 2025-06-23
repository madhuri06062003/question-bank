can we compile program without main() function?
we can compile without main() but we cant run the program
Example :
#include<stdio.h>
int i,n;
printf("Enter number :");
scanf("%d",&n);

printf("Element :\n");
for(i=0;i<n;i++) {
    scanf("%d",&i);
}
