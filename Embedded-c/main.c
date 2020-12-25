#include <operation.h>

int main()
{
int choice,num,result=0;
printf("Enter the number: ");
scanf("%d",&num);
printf("Enter 1 to find square of the number\nEnter 2 to find cube of the number\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=square(num);
printf("Square of the number is %d",result);
break;

case 2:
result=cube(num);
printf("Cube of the number is %d",result);
break;

default:
printf("invalid choice");
break;
}
return 0;
}