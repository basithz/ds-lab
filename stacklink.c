#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
	
};
struct node *head,*newnode,*temp,*prev;
struct node* push(struct node *head,int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==0)
	{
		head=newnode;
		return head;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	return head;
	
}
struct node* pop(struct node *head)
{
	if(head==0)
	{
		printf("under flow occure");
		
	}
	temp=head;
	prev=0;
		while(temp->next!=0) //treversi
	{
		prev=temp;
		temp=temp->next;
			}
			prev->next=NULL;
			free(temp);
			return head;
			

}
struct node*  search(struct node *head)
{
	int c=0,i=0,item;
	printf("enter the item to be search");
	scanf("%d",&item);
		temp=head;
	while(temp->next!=NULL)
	{
		i++;
		
		if(temp->data==item)
		{
			printf("item found at position=",i);
			c++;
			break;
		}
		temp=temp->next;
	}
	if(c==0)
	{
		printf("item  note found");
		return head;
	}
	
	
}
void dis(struct node *head)
{
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void main()
{
	head=0;
	int ch,data,top=-1;
	while(1)
	{
		printf("1,insert\n2.pop\n3.dis\n4.search\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter data");
					scanf("%d",&data);
					head=push(head,data);
					break;
			case 2:head=pop(head);
					break;
			case 3:dis(head);
			       break;
			case 4:search(head);
			break;
			case 5:exit(0);
			default:printf("wrong");
				   				
					
		}
	}
}
