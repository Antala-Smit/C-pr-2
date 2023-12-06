//7. Write C program use switch statement create simple calculator
#include<stdio.h>

void main(){
	char o;
	int a, b;
	
	printf("Enter opr. (+,-,*,/) :- ");
	scanf("%c",&o);
	printf("Enter value of A :-");
	scanf("%d",&a);
	printf("Enter value of B :-");
	scanf("%d",&b);
	
	switch (o){
		case '+':
			printf("Final Ans :- %d",a + b);
		break;
		case '-':
			printf("Final Ans :- %d",a - b);
		break;
		case '*':
			printf("Final Ans :- %d",a * b);
		break;
		case '/':
			printf("Final Ans :- %d",a / b);
		break;
	}	
}

