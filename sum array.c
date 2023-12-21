#include<stdio.h>

//Write C program to find sum of all elements of array.

void main (){
	int a[50],i,no,sum=0;
	
	printf("Enter Number of Array :- ");
	scanf("%d",&no);
	
	for(i=0; i<no; i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	printf("\nSum of all Elements of Array\n");
	for(i=0; i<no; i++){
			printf("a[%d] = %d\n",i,a[i]);
			sum = sum + a[i];
	}
	printf("\nTotal Array = %d", sum);
}
