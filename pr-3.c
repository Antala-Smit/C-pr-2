//3. Write C program to find out max from 4 numbers using nested if.

#include<stdio.h>

void main(){
	int a,b,c,d;
	printf("Enter no A :-");
	scanf("%d",&a);
	printf("Enter no B :-");
	scanf("%d",&b);
	printf("Enter no C :-");
	scanf("%d",&c);
	printf("Enter no D :-");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Big");
			}else{
				printf("D is Big");
			}
		}else{
			if(c>d){
				printf("C is Big");
			}else{
				printf("D is Big");
			}
		}
		}
	else{
		if(b>c){
			if(b>d){
				printf("B is Big");
			}else{
				printf("D is Big");
			}
		}else{
			if(c>d){
				printf("C is Big");
			}else{
				printf("D is Big");
			}
		}
	}
}
