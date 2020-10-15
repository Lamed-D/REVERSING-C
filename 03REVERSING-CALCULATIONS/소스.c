#include <stdio.h>

int main()
{
	int a = 1;
	int b = 3;
	printf("%d \n", a + b);
	printf("%d \n", a - b);
	printf("%d \n", a / b);
	printf("%d \n", a * b);

	printf("%d \n", a >> 2);
	printf("%d \n", a << b);
	printf("%d \n", a & b);
	printf("%d \n", a ^ 2);
	printf("%d \n", a | 0xFF);

	__asm
	{
	 mov         eax, dword ptr[a]
	 ror         al, 5
	 push		 eax
	}
	printf("%d");
	__asm
	{
	 add         esp, 4
	}
}

