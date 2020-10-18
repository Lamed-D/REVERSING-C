#include <stdio.h>

int __stdcall stdtest(int a, int b, int c, int d);
int __fastcall fasttest(int a, int b, int c, int d);
int __cdecl cdecltest(int a, int b, int c, int d);
int main()
{
	stdtest(1, 2, 3, 4);
	fasttest(1, 2, 3, 4);
	cdecltest(1, 2, 3, 4);
}
int __stdcall stdtest(int a, int b, int c, int d)
{
	return a + b + c + d;
}
int __fastcall fasttest(int a, int b, int c, int d)
{
	return a + b + c + d;
}
int __cdecl cdecltest(int a, int b, int c, int d)
{
	return a + b + c + d;
}

	