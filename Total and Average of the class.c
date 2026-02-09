#include <stdio.h>
struct student
{
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("Enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter student %d marks:",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("Total marks=%d,Average=%f",total,avg);
	return 0;
}
