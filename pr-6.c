//6.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
#include<stdio.h>

void main(){
	int p, c, b, m, co, per;
	
	printf("Enter Physics Marks :-");
	scanf("%d",&p);
	printf("Enter Chemistry Marks :-");
	scanf("%d",&c);
	printf("Enter Biology Marks :-");
	scanf("%d",&b);
	printf("Enter Mathematics Marks :-");
	scanf("%d",&m);
	printf("Enter Computer Marks :-");
	scanf("%d",&co);
	
	per=(p+c+b+m+co)/5;
	printf("%d\n",per);
	
	if(per >= 90){
		printf("Grade A");
	}else if(per >= 80){
		printf("Grade B");
	}else if(per >= 70){
		printf("Grade C");
	}else if(per >= 60){
		printf("Grade D");
	}else if(per >= 45){
		printf("Grade E");
	}else{
		printf("Grade F");
	}
}
