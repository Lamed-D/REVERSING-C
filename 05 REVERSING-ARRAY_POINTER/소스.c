#include <Stdio.h>
#include <Windows.h> // BYTE WORD DWORD

int main()
{
	char Dhhd[4] = "Dhhd";
	short array[2] =
	{
		0x31,
		0x32
	};
	BYTE test[2] =
	{
		10,
		20
	};

	printf("%s\n", Dhhd);
	printf("%d\n", test);
	printf("%s\n", array);

	int* p;
	p = &Dhhd;
	puts(p);
}

