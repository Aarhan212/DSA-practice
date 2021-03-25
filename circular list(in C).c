#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node
 
{
	int info;
	struct Node *next;
}node;
 
node *front=NULL,*rear=NULL,*temp;
 
void create_list();
void deletion();
void display();
 
int main()
{
	int chc;
	create_list();
    display();
 
	return 0;
}
 
void create_list()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	if(rear==NULL)
	front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
	rear->next=front;
}
 
void deletion()
{
	temp=front;
	if(front==NULL)
		printf("\nUnderflow :");
	else
	{
		if(front==rear)
		{
			printf("\n%d",front->info);
			front=rear=NULL;
		}
		else
		{
			printf("\n%d",front->info);
			front=front->next;
			rear->next=front;
		}
 
	temp->next=NULL;
	free(temp);
	}
}
 
void display()
{
	temp=front;
	if(front==NULL)
		printf("\nEmpty");
	else
	{
		printf("\n");
		for(;temp!=rear;temp=temp->next)
			printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
			printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
	}
}