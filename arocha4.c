//Angelica Rocha
//csc-321

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 0;
	double y = 0.0;
	char c = 'a';
	float z = 0.0;

	printf("enter an integer: ");
	scanf("%d",&x);

	if (x > 5)
	{
		printf("Your input a numer larger than 5 \n");
	}
	else if (x==5)
	{
		printf("You input 5 \n");
	}
	else
	{
		printf("You entered a number less than 5 \n");
	}

	return EXIT_SUCCESS;
}
