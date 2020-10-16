#include <stdio.h>

int main()
{
	bool a = true;
	int b = false;
	int zero = 0;
	int true1 = 1; //0뺴고 나머지 다가능
	if (a) printf("a\n");
	else if (b) printf("b\n");
	if (zero) printf("zero\n");
	if (true1)  printf("true1\n");
	else printf("else\n");

	printf("\n");
	
	switch (a)
	{
	case true: printf("true\n");
	case false: printf("false\n");
		break;
	case 10: printf("10\n");
	default: printf("default\n");
	}

	printf("\n");

	while (a)
	{
		a = false;
		printf("a is not true / a != true\n");
	}

	printf("\n");

	for (zero = 0; zero != true; zero++)
	{
		printf("TRUE IS ONE / TRUE = 1\n");
	}

	goto HERE;
	printf("IT IS NOT WORK FUCTION\n");
HERE:
	return 0;
}

