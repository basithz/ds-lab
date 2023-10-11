#include<stdio.h>
#include<conio.h>
int queue[100],n,front=-1,rear=-1,item;
void del(int n)
{
	if(front<0&&front>rear)
	{
		printf("queue is underflow");
	}
	else
	{
		front=front+1;
		
	}

}
void inser(int n)
{
	if(rear==n-1)
	{
		printf("over flow");
	}
	if(front==-1)
	front=0;
	printf("enter the element to be inserted");
	scanf("%d",&item);
	rear=rear+1;
	queue[rear]=item;
}
void display()
{
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d",queue[i]);
		
	}
	
}
void main()
{
	int ch;
	printf("enter the size of queue");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.insert\n2.delet\n3.dipaly\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:inser(n);
			       break;
			case 2:del(n);
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			default:printf("wrong choice");
				   	          
		}
	}
	
	
}
