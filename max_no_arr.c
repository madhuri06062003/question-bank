//without using function
/*#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int max,i;
     
    max =arr[0];
    for(i=0;i<9;i++) {
        printf("Checking arr[%d] :%d\n",i,arr[i]);
        if(arr[i]>max) {
            max=arr[i];
            printf("Maximum :%d\n",max);
        }
    }
    return 0;
}*/

//using function
#include<stdio.h>
int max_arr_find(int arr[],int length);

int main() {
    int arr[]={445,23,4,67,853,1,34,56,53};
   int length =0;
    int max=max_arr_find(arr,length);

    printf("Max value :%d\n",max);

}
int max_arr_find(int arr[],int length) {
    int max,i;
    max=arr[0];
    for(i=0;i<length;i++) {
        printf("arr[%d] :%d\n",i,arr[i]);
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("\n");
    return max;
}