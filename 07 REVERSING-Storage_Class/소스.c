#include <stdio.h>
#include "소스2.h"

int Global_variable = 1; //전역변수 main위에있다

int Extern_variable; //외부변수
int main()
{
	auto int Local_variable = 2; // 뒤에것랑같다 int count; (기본)(지역변수)

	static int Static_variable = 3;//정적 변수


	register int Register_variable = 5; //레지스터 변수

	printf("Global_variable = %d\n", Global_variable);
	printf("Local_variable = %d\n", Local_variable);
	printf("Static_variable = %d\n", Static_variable);
	printf("Extern_variable = %d\n", Extern_variable);
	printf("Register_variable = %d\n", Register_variable);
}

