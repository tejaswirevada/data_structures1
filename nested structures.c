#include <stdio.h>
struct student
{
	int roll;
	char name[20];
	struct DOB
	{
		int day,month,year;
	}d;
}s;
int main()
{
	printf("Enter student roll number:");
	scanf("%d",&s.roll);
	printf("Enter student name:");
	scanf("%s",&s.name);
	printf("Enter date of birth in(dd/mm/yy)format: ");
	scanf("%d%d%d",&s.d.day,&s.d.month,&s.d.year);
	printf("Student roll number:%d\nStudent name:%s\nStudent DOB:%d/%d/%d",s.roll,s.name,s.d.day,s.d.month,s.d.year);
	return 0;
}
