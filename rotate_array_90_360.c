#include<stdio.h>
#define N 3

void Matrix(int matrix[N][N]) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}
void rotate90(int matrix[N][N],int result[N][N]) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            result=[j][N-1-i]=matrix[i][j];
        }
    }
}
int main() {
    int matrix[N][N]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rotate90[N][N];
    int rotate360[N][N];

    rotate90(matrix, rotated90);
    rotate90(matrix, rotated360);
    rotate90(rotated360, rotated360);
    rotate90(rotated360, rotated360);

    printf("Original matrix:\n");
    Matrix(matrix);

    printf("matrix after 90:\n");
    Matrix(rotate90);

    printf("matrix after 360\n");
    Matrix(rotate360);

    return 0;
}