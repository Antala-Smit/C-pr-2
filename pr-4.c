//4. Write C program use switch statement. Display Monday to Sunday.
#include<stdio.h>

void main(){
	char day;
    printf("\nEnter a day:");
    scanf("%c",&day);
    switch(day){
        case 'M':
            printf("Monday");
        break;
        case 'T':
            printf("Tuesday");
        break;
        case 'W':
            printf("Wednesday");
        break;
        case 't':
            printf("Thursday");
        break;
        case 'F':
            printf("Friday");
        break;
        case 'S':
            printf("Saturday");
        break;
        case 's':
            printf("Sunday");
        break;
        default :
            printf("Invalid Input");
        break;
        }
}
