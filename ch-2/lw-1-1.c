#include<stdio.h>
#include<conio.h>
 int main()
{
	int a=12,b=6;
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	printf("Subtraction of %d and %d is %d\n",a,b,a-b);
	printf("Multiplication of %d and %d is %d\n",a,b,a*b);
	printf("Division of %d and %d is %d\n",a,b,a/b);
	printf("Modulus of %d and %d is %d\n\n",a,b,a%b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d#%d=%d\n",a,b,a%b);
	getch();
}