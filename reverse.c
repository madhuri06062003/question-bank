#include<stdio.h>
int main() {
    int i;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int length =9;

    for(i=0;i<(length/2);i++) {
        int temp =0;
        temp =arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
    for(i=0;i<length;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}