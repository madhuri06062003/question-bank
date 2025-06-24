//without using function
/*#include<stdio.h>
int main() {
    int arr[]={445,23,4,67,853,1,34,56,53};
    int min,i;
    min=arr[0];
    for(i=0;i<9;i++) {
        printf("Checking arr[%d] :%d\n",i,arr[i]);
        if(arr[i]<min) {
            min=arr[i];
            printf("New min :%d\n",min);
        }
    }
    printf("Minimum number %d\n",min);
    return 0;
}*/

//using function
#include<stdio.h>
int max_arr_find(int arr[],int length);

int main() {
    int arr[]={34,2,45,67,24,56,35};
    int lenght;
    int min=max_arr_find(arr, length);
    printf("Minimum %d\n",min);
    return 0;
}
int max_arr_find(int arr[],int length) {
    int min,i;
    for(i=0;i<length;i++) {
        printf("Cheking arr[%d] :%d\n",i,min);
        if(arr[i]<min) {
            min =arr[i];
        }
    }
    printf("\n");
    return 0;
}

