#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
	};

	struct node *head,*temp,*newnode;
	int choice,count=0;
	head=0;

	while(choice)
	{
	//create new node
	newnode=(struct node *)malloc(sizeof(struct node));

	//enter data to new node
	printf("Enter data\n");
	scanf("%d",&newnode->data);

	//prev pointer of new node to null as its single node in linked list
	newnode->next=0;

	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		//now if 2nd node you want to attach to previous node
		//store 2nd node address into next of st node
		temp->next=newnode;

		//temp point to just inserted node
		temp=newnode;

	}

	printf("Enter your choice\n 0.Not going to continue\n 1.Continue further\n");
        scanf("%d",&choice);
	}


	//print the whole linked list
	temp=head;
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
		count++;
	}

	printf("Linked list contains %d elements\n",count);

	return 0;

}
