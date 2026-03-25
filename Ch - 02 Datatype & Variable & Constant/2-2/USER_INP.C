#include <stdio.h>
#include <conio.h>

main()
{
	int age;
	float marks;

	int a,b;

	clrscr();

	printf("Enter your age : ");
	scanf("%d", &age);

	printf("Enter your marks : ");
	scanf("%f",&marks);

	printf("\n\n");
	printf("My Age is %d and My Marks is %.2f",age, marks);


	printf("\n\n");

	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);

	printf("\n%d + %d = %d\n",a, b, a+b);
	printf("%d %% %d = %d\n",a,b,a%b);

	printf("\\n");

	getch();
}