#include<stdio.h>

// Write C program to find sum of diagonal elements of a matrix.

void main (){
	int a[50][50], row, col, i, j, sum=0;
	
	printf("Enter Row :- ");
	scanf("%d", &row);
	printf("Enter Colum :- ");
	scanf("%d", &col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nPrint of Matrix\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(i==j){
				printf("%d ",a[i][j]);
				sum = sum + a[i][i];
			}
		}
	}
	printf("\nTotal Array :- %d\n", sum);
}


