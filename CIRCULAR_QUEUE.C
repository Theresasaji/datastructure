#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int opt,front=-1,rear=-1,cq[size],no,i,ch=1;
	clrscr();
	while(ch)
	{
	printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit \n");
	printf("\nEnter the Choice:");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
		if(front==(rear+1)%size)
		{
			printf("circular queue is full");
		}
		else
		{
			if(rear==-1)
			{
				rear=front=0;
			}
			else
			{
				rear=(rear+1)%size;
			}
			printf("Enter the element:");
			scanf("%d",&no);
			cq[rear]=no;
		}
		break;
		case 2:
		if(front==-1)
		{
			printf("\nCircular Queue is empty");
		}
		else
		{
			printf("\n Deleted Element is : %d",cq[front]);
			if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				front=(front+1)%size;
			}
		}
		break;
		case 3:
		if(front==-1)
		{
			printf("Circular Queue is Empty\n");
		}
		else
		{
			printf("Elements in Circular Queue are: \n");
			if(front<=rear)
			{
				for(i=front; i<=rear; i++)
				{
					printf("%d",cq[i]);
					printf("\n");
				}
			}
			else
			{
				for(i=front; i<=size; i++)
					printf("%d",cq[i]);
				for(i=0; i<=rear; i++)
					printf("%d",cq[i]);
			}
		}
		break;
		case 4:
		exit(0);
		default:
		printf("\n Wrong Choice: please see the options \n");
	}
	}
	getch();
}