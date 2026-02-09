#include <stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main()
{
	struct student s1={1,"sita",98.7,'O'};
	printf("Student roll number:%d\nStudent name:%s\nStudent marks:%.2f\nStudent grade:%c",s1.roll,s1.name,s1.marks,s1.grade);
	return 0;
}
