#include<stdio.h>

//Write C program to find minimum and maximum element in array

void main (){
	int a[50],i,no,max,min;
	
	printf("Enter Number of Array :- ");
	scanf("%d",&no);
	
	for(i=0; i<no; i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	max = a[0];
    min = a[0];
    
	printf("\nFind Minimum and Maximum Element in Array\n");
	
	for(i=0; i<no; i++){	
		if(a[i] < min){
			min = a[i];
		}
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("Minimum element = %d\n", min);
	printf("Maximum element = %d\n", max);
}
