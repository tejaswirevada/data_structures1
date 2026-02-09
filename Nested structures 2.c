#include <stdio.h>
struct dob
{
	int day,month,year;
};
struct student
{
	int roll;
	char name[20];
	struct dob d;
}s;
int main()
{
	printf("Enter roll number:");
	scanf("%d",&s.roll);
	printf("Enter student name:");
	scanf("%s",&s.name);
	printf("Enter student date of birth in (dd/mm/yy) format:");
	scanf("%d%d%d",&s.d.day,&s.d.month,&s.d.year);
	printf("Student roll number:%d\nStudent name:%s\nStudent date of birth:%d/%d/%d",s.roll,s.name,s.d.day,s.d.month,s.d.year);
	return 0;
}

