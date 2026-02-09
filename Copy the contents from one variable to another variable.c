#include <stdio.h>
struct student
{
	int roll;
	float marks;
};
int main()
{struct student s1,s2;
s1.roll=827;
s1.marks=8.8;
s2=s1;
printf("Student roll number:%d\nStudent marks:%f",s2.roll,s2.marks);
return 0;
}

