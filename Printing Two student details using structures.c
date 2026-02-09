#include <stdio.h>
struct student {
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main()
{
	struct student s1={1,"sita",98.7,'O'},s2={2,"Ram",99.9,'O'};
	printf("Student Roll number:%d\nStudent Name:%s\nStudent marks:%.2f\nStudent Grade:%c",s1.roll,s1.name,s1.marks,s1.grade);
	printf("\nStudent Roll number:%d\nStudent Name:%s\nStudent marks:%.2f\nStudent Grade:%c",s2.roll,s2.name,s2.marks,s2.grade);
return 0;
}
