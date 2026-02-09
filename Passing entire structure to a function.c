#include <stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
void display(struct student s2);
	
int main()
{
	struct student s1,s2;
	printf("Enter roll number:");
	scanf("%d",&s1.roll);
	printf("Enter student name:");
	scanf("%s",&s1.name);
	printf("Enter student marks:");
	scanf("%f",&s1.marks);
	display(s1);
	return 0;
}
void display(struct student s2)
{
	printf("Student roll number:%d\nStudent name:%s\nStudent marks:%f",s2.roll,s2.name,s2.marks);
}
