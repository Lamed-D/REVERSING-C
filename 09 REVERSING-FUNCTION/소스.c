#include <stdio.h>

void function1();
int function2(int parameter1, int parameter2);
int main(void)
{
	printf("main Start\n");
	function1();
	printf("main End\n");
}

void function1()
{
	printf("function1 Start\n");
	function2(1,3);
	printf("function1 End\n");
}

int function2(int parameter1,int parameter2)
{
	int Local1, Local2;
	Local1 = parameter1 + parameter2;
	Local2 = parameter1 * parameter2;
	printf("function2\n");
	return Local1 + Local2;
}

