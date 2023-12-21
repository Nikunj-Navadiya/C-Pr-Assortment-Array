#include<stdio.h>

//Write C program to find second largest number in array.

void main (){
	int a[50],i,no,max,sl;
	
	printf("Enter Number of Array :- ");
	scanf("%d",&no);
	
	for(i=0; i<no; i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	max = a[0];
    
	printf("\nsecond largest number in array\n");
	
	for(i=0; i<no; i++){
			if(a[i] > max){
				sl = max;
				max = a[i];
			}
			else if(a[i] > sl && a[i] < max){
				sl = a[i];
			}
	}
	 printf("Second largest :-  %d", sl);
	
}
