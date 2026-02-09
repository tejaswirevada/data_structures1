#include <stdio.h>
struct student
{
	int roll;
	float marks;
}s;
void display(int a,float b);
int main()
{
	printf("Enter roll number of the student:");
	scanf("%d",&s.roll);
	printf("Enter marks of the student:");
	scanf("%f",&s.marks);
	display(s.roll,s.marks);
	return 0;
}
void display(int a,float b)
{
	printf("Student roll number:%d\nStudent marks:%f",a,b);
}
