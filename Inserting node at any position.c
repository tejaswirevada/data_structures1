#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=0,*temp=0;
void create()
{
	struct node *newnode=0;
	int n,i;
	printf("\nEnter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->link=newnode;
			temp=newnode;
		}
	}
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
int main()
{
	create();
	display();
	struct node *snode=0;
	int i,pos;
	snode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter newly created node data:");
	scanf("%d",&snode->data);
	snode->link=NULL;
	printf("\nEnter position:");
	scanf("%d",&pos);
	if(pos==1)
	{
		snode->link=head;
		head=snode;
	}
	else
	{
	temp=head;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->link;

	}
	snode->link=temp->link;
	temp->link=snode;
}
	display();
	return 0;
}
