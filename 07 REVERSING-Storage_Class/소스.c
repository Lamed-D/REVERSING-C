#include <stdio.h>
#include "�ҽ�2.h"

int Global_variable = 1; //�������� main�����ִ�

int Extern_variable; //�ܺκ���
int main()
{
	auto int Local_variable = 2; // �ڿ��Ͷ����� int count; (�⺻)(��������)

	static int Static_variable = 3;//���� ����


	register int Register_variable = 5; //�������� ����

	printf("Global_variable = %d\n", Global_variable);
	printf("Local_variable = %d\n", Local_variable);
	printf("Static_variable = %d\n", Static_variable);
	printf("Extern_variable = %d\n", Extern_variable);
	printf("Register_variable = %d\n", Register_variable);
}

