#include <Stdio.h>

int main()
{
	typedef struct {
		int age;
		char name[20];
	} person;

	person p1;

	strcpy(p1.name, "Dhhd");
	p1.age = 17;

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);

	person* p2 = malloc(sizeof(person));

	strcpy(p2->name, "���δ�");
	p2->age = 17;

	printf("�̸�: %s\n", p2->name);
	printf("����: %d\n", p2->age);

	free(p2);
}