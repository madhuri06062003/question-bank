#include<stdio.h>
int main () {
    int arr[100],arr1[100];
    int i,n;
    printf("Enter number :");
    scanf("%d",&n);

    printf("Before swapping\n");
    printf("Enter arr%d\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter arr1%d\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++) {
        int temp =arr[i];
        arr[i]=arr1[i];
        arr1[i]=temp;
    }
    printf("After swaping \n");
    printf("Enter arr\n");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("Enter arr1");
    for(i=0;i<n;i++) {
        printf("%d",arr1[i]);
    }
    printf("\n");
    return 0;
}