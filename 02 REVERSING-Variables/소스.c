#include <stdio.h>

int main()
{
	int stringDhhd = 0x64686844;
	int stringABC = 0x00434241; // Dhhd�� ascii ���� d = 0x64/h = 0x 68/D = 0x44 Dhhd = 0x44686864�ε� ��Ʋ��������� �ٲٸ� 0x64686844�̷��Եȴ�
	puts(&stringABC);
	puts(&stringDhhd);
}

