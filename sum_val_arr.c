//without function
/*#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5};
    int sum =0;

    
    for(int i=0;i<5;i++) {
        sum =sum+arr[i];
    }
    printf("Total sum :%d\n",sum);
}*/

//using function
#include<stdio.h>
int sum_var(int arr[],int length);

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("total sum :%d\n", sum_var(arr,9));

    
}
int sum_var(int arr[],int length) {
    int sum_var;
    for(int i=0;i<length;i++) {
        sum_var =sum_var+arr[i];
    }
    return 0;
} 
