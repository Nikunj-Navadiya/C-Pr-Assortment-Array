#include<stdio.h>

//Write C program to print array in reverse order.

void main (){
	int a[50],i,no;
	
	printf("Enter Number of Array :- ");
	scanf("%d",&no);
	
	for(i=0; i<no; i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	printf("\nPrint Array in Reverse Order\n");
	for(i=no-1; i>=0; i--){
			printf("a[%d] = %d\n",i,a[i]);
	}
}
