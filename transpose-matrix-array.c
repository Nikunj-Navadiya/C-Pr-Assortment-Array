#include <stdio.h>

// C program to find transpose of a matrix

void main(){
    int a[50][50], b[50][50], i, j, row, col;

   printf("Enter Row :- ");
   scanf("%d",&row);
   printf("Enter Colum :- ");
   scanf("%d",&col);
   
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
        	printf("a[%d][%d] :- ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal matrix\n");
    
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose of matrix\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", b[i][j] = a[j][i]);
        }
        printf("\n");
    }
}

