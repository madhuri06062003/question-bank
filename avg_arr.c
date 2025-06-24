//without function
/*#include<stdio.h>
int main() {
    double arr[]={1,2,3,4,5};
    double sum=0;
    double avg=0;

    for(int i=0;i<5;i++) {
        sum =sum+arr[i];
        printf("arr[%d]:%lf, sum=%lf\n",i,arr[i],sum);
    }
    avg=sum/5;
    printf("avg %lf\n",avg);
    return 0;
}*/


//using function
#include<stdio.h>
double avg_arr(double arr[],int length);

int main() {
    double arr[]={1,2,3,4,5,6,7,8};
    printf("avg : %lf\n",avg_arr(arr,8));

    return 0;
}
double avg_arr(double arr[],int length) {
    int i;
    double sum;
    
    for(i=0;i<length;i++) {
        printf("arr[%d]=%lf , sum =%lf\n",i,arr[i],sum);
        sum =sum+arr[i];
     }
      return sum/length;
}