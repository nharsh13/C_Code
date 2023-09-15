#include <stdio.h>
void main()
{
int a,b;
printf("Enter your 1st number: ");
scanf("%d",&a);
printf("Enter your 1st number: ");
scanf("%d",&b);
printf("\n your nos. are: %d and b: %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping : \n" );
printf("%d and %d\n",a,b);
}
