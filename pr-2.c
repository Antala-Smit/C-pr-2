//2. Write C program to check a number is even or odd using ternary operator.

#include<stdio.h>

void main(){
	int no;
	printf("Enter number :-");
	scanf("%d",&no);
	
	(no%2==0) ? printf("This is even number.")
	:printf("This is odd number.");
}
