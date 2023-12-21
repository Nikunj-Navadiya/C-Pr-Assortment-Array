#include<stdio.h>

// Write a c program to check whether two matrices are equal or not.

void main (){
	int a[50][50],b[50][50], i, j, row, col, equal=1;
	
	printf("A Matrices\n");
	printf("Enter of Row :- ");
	scanf("%d",&row);
	printf("Enter of Colum :- ");
	scanf("%d",&col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nB Matrices\n");
	printf("Enter of Row :- ");
	scanf("%d",&row);
	printf("Enter of Colum :- ");
	scanf("%d",&col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("b[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(a[i][j] != b[i][j]){
				equal = 0;
			}
		}
	}
	if(equal == 1){
        printf("\nTwo Matrices are Equal");
    }
	else{
        printf("\nTwo Matrices are Not Equal");
    }	
}
