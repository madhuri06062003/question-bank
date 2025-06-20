#include<stdio.h>
int main() {
    int i,j,row,col;
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter row :");
    scanf("%d",&row);
    printf("Enter col :\n");
    scanf("%d",&col);

    printf("Elements 1 :\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Element 2 :\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            sum[i][j]=a[i][j]+b[i][j];
       }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("sum =%d",sum[i][j]);
        }
    }
    return 0;
}