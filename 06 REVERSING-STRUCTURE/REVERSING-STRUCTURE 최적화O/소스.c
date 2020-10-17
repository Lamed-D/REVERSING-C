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

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);

	person* p2 = malloc(sizeof(person));

	strcpy(p2->name, "김인덕");
	p2->age = 17;

	printf("이름: %s\n", p2->name);
	printf("나이: %d\n", p2->age);

	free(p2);
}