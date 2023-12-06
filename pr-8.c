//8.Write C program use ledder if else simple calculator
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
	
	if(o == '+'){
		printf("Final Ans :- %d",a + b);
	}else if(o == '-'){
		printf("Final Ans :- %d",a - b);
	}else if(o == '*'){
		printf("Final Ans :- %d",a * b);
	}else if(o == '/'){
		printf("Final Ans :- %d",a / b);
	}else{
		printf("Invalide Value");
	}
}
