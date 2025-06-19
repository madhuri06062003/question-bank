#include<stdio.h>
void swaparr(int *arr1,int *arr2,int size) {
    for(int i=0;i<size;i++) {
        int temp =*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
    }
}
void pointerarr(int *arr,int size) {
    for(int i=0;i<size;i++) {
        printf("%d",*(arr+i));
    }
    printf("\n");
}
int main() {
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,4,6,8,10};
    int size=sizeof(arr1)/sizeof(arr1[0]);

    printf("Before swapping :\n");
    printf("arr1:");
    pointerarr(arr1,size);
    printf("arr2:");
    pointerarr(arr2,size);

    swaparr(arr1,arr2,size);

    printf("After swapping:\n");
    printf("arr1:");
    pointerarr(arr1,size);
    printf("arr2:");
    pointerarr(arr2,size);

    return 0;
}