#include <stdio.h>
union  student
{
	int roll;
	float marks;
};
int main()
{
	union student s;
	s.roll=101;
	s.marks=98.6;
	printf("\nsize of s is %d",sizeof(s));
	printf("\nStudent roll number:%d",s.roll);
	printf("\nStudent marks:%f",s.marks);
	return 0;
}
