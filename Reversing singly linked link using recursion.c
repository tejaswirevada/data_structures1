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

	struct node *reverse(struct node *head)
	{
		if(head==NULL||head->link==NULL)
		return head;
		struct node *newhead=reverse(head->link);
		head->link->link=head;
		head->link=NULL;
		return newhead;
	}
	int main()
	{
	create();
	display();
	head=reverse(head);
	printf("\nAFTER REVERSING:\n");
	display();
	return 0;	
	}
