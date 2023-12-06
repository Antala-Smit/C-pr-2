//5. Write C program to input angles of a tringle and check whether tringle is valid or not.

#include<stdio.h>

void main(){
	
	int a,b,c,sum;
	printf("Side 1 :-");
	scanf("%d",&a);
	printf("Side 2 :-");
	scanf("%d",&b);
	printf("Side 3 :-");
	scanf("%d",&c);
	
	sum =a+b+c;
	
	if(sum==180){
		printf("Tringle is Valid");
	}else{
		printf("Tringle is Invalid");
	}
}
