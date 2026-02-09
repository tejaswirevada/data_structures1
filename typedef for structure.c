#include <stdio.h>
typedef struct student
{
	int roll;
	float marks;
}stu;
int main()
{
	stu a1,a2;
	a1.roll=1;
	a1.marks=90.4;
	a2.roll=2;
	a2.marks=99.9;
	printf("\n%d\n%f\n%d\n%f",a1.roll,a1.marks,a2.roll,a2.marks);
	return 0;
}
