#include <stdio.h>
#include <conio.h>

main()
{
	int a = 100, b = 20;
	clrscr();

	printf("Value of %d and %d sum is : %d\n",a,b, a+b);
	printf("Value of %d and %d subtraction is : %d\n\n", a, b, a-b);

	// 100 + 20 = 120

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d * %d = %d",a,b,a*b);

	getch();
}