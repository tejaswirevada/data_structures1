#include <stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
}s;
void display(struct student *ptr);
int main()
{
	printf("Enter roll number of the student:");
	scanf("%d",&s.roll);
	printf("Enter name of the student:");
	scanf("%s",&s.name);
	printf("Enter student marks:");
	scanf("%f",&s.marks);
	display(&s);
	return 0;
}
void display(struct student *s2)
{
	printf("Student roll number:%d\nStudent name:%s\nStudent marks:%f",s2->roll,s2->name,s2->marks);
}



