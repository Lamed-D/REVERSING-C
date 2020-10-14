#include <stdio.h>

int main()
{
	int stringDhhd = 0x64686844;
	int stringABC = 0x00434241; // Dhhd는 ascii 기준 d = 0x64/h = 0x 68/D = 0x44 Dhhd = 0x44686864인데 리틀엔디안으로 바꾸면 0x64686844이렇게된다
	puts(&stringABC);
	puts(&stringDhhd);
}

