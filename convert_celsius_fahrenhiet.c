#include<stdio.h>
int main() {
    double c=0;
    double f=0;

    printf("Enter c temp : ");
    scanf("%lf",&c);

    f=(c*1.8)+32;

    printf("c: %2lf f: %2lf\n",c,f);
    return 0;
}