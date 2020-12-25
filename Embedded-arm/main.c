#include <stdio.h>

int main()
{
int choice,num,result=0;
int square(int num)
{
return num*num;
}
int cube(int num)
{
return num*num*num;
}
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