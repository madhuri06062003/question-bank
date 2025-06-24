//count occurance without function
#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int count =0;
    int n,i;
    int find_number=6;
    printf("Enter number :");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        if(arr[i]==find_number) {
            count++;
        }
        printf("%d found %d\n",i,count);
    }
    printf("\n");
    return 0;
}


//using function
/*#include<stdio.h>
int count_occur(int arr[],int length,int find_number);

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    printf("5 found %d\n",arr[5]);
}
int count_occur(int arr[],int length,int find_number) {
    int i;
    int count =0;

    for(i=0;i<length;i++) {
        printf("arr[%d] :%d\n",i,arr[i]);
        if(arr[i]==find_number) {
            count++;

            printf("Increment :%d\n", count);
        }
    }
    printf("\n");
    return 0;
}*/