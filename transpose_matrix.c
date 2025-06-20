//transpose is a new matrix that exchange of row and col 
#include<stdio.h>
int main() {
    int i,j,row,col;
    int matrix[10][10],transpose[10][10];
    printf("Enter row :");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    printf("Enter elements :");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%d",matrix[i][j]);
            if(j==col-1) {
                printf("\n");
            }
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            transpose[i][j]=matrix[i][j];
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("transpose %d\n",transpose[i][j]);
            if(j==row-1) {
                printf("\n");
            }
        }
    }
    return 0;
}