//without using function
/*#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int length =9;
    int temp;
    int i;

    for(i=0;i<length/2;i++) {
        temp=arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
    for(i=0;i<length;i++) {
        printf("arr[%d] :%d\n",i,arr[i]);
    }
    return 0;
}*/

//using function
#include<stdio.h>
void reversearr(int arr[],int length);

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i;
    int length =9;
    reversearr(arr,9);
    for(i=0;i<(length);i++) {
    printf("arr[%d] :%d\n",i,arr[i]);
    }
    return 0;
}
void reversearr(int arr[],int length) {
    int i;
    int temp;
    for(i=0;i<length/2;i++) {
        temp=arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;

    }
}