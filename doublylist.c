#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*pre;
};
struct node *head=NULL,*tail=NULL,*newnode,*temp,*prev;

void insertbig()
{
newnode=(struct node*)malloc(sizeof(struct node));

printf("enter data");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->pre=0;
if(head==0)
{
 head=tail=newnode;
}
else
{
	head->pre=newnode;
	newnode->next=head;
	head=newnode;
}
return ;
}
void insertatend()
{
	newnode=(struct node*)malloc(sizeof(struct node));

	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->pre=0;
		if(head==0)
	{
	  head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->pre=tail;
		tail=newnode;
	}
	return ;
}
void insertat()
{
	int pos,i=1;
	newnode=(struct node*)malloc(sizeof(struct node));

	printf("enter data");
	scanf("%d",&newnode->data);
	printf("enter position");
	scanf("%d",&pos);
	newnode->next=0;
	newnode->pre=0;
	if(pos<1)
	{
	 printf("wrong position");
	}
	if(pos==1&& head==0)
	{
	 head=tail=newnode;
	return ;
	}

	else if(pos==1)
	{
		head->pre=newnode;
		newnode->next=head;
		head=newnode;
                return ;
           }
	else
	{
	 temp=head;
	 prev=0;
	 while(i<pos&&temp!=0)
	{
	 prev=temp;
	 temp=temp->next;
	 i++;
	}
	if(i<pos)
	{
	 printf("out of range");
	 return ;
	}
		newnode->next=prev->next;
		prev->next=newnode;
		newnode->pre=prev;
		temp->pre=newnode;
	}
	return ;
	}
	void delet()
	{
	if(head==0)
	{
	printf("emty list");
	return ;
	}
else
{
temp=head;
head=temp->next;
head->pre=0;
free(temp);
}
}
void deleteend()
{
if(head==0)
{
printf("emty list");
return ;
}
else
{
temp=tail;
tail=temp->pre;
tail->next=0;
free(temp);
}
return ;
}
void deleteat()
{
int i=1,pos;
printf("enter position");
scanf("%d",&pos);
if(pos<1)
{
printf("invalid position");
return ;
}
else if(pos==1&&head==0)
{
printf("emty list");
return ;
} 
else if(pos==1)
{
temp=head;
head=temp->next;
head->pre=0;
free(temp);
}
else
{
temp=head;
prev=0;
while(i<pos&&temp!=0)
{
 	prev=temp;
 	temp=temp->next;
 	i++;
 }
 if(i<pos)
 {
 printf("out of range");
 return ;
 }
 newnode=temp->next;
 prev->next=newnode;
 newnode->pre=prev;
 free(temp);
 }
 return ;
 }
 void search()
{
	int i=0,c=0,item;
	printf("enter item to be searched");
	scanf("%d",&item);
	temp=head;
	while(temp->next!=NULL)
	{
	i++;
	if(temp->data==item)
	{
	printf("item found at position=%d",i);
	c++;
	break;
	}
	temp=temp->next;
	}
	if(c==0)
	{
	printf("item note found");

	}
}
 void display()
  {
  	struct node *temp;
  	temp=head;
  	while(temp!=0)
  	{
  		printf("[%d|x]->",temp->data);
  		temp=temp->next;
	  }
	  printf("NULL");
  }
 int main()
 {
 int ch;
  	while(1)
  	{
  		printf("\n1.insert at big\n2.at end\n3.display\n4.insert at\n5.delete \n6.delete at end\n7.delete at position\n8.search\n9.search\n");
  		scanf("%d",&ch);
  		switch(ch)
  		{
  			case 1:insertbig();
  					break;
  			case 2:insertatend();
			  		break;
			case 3:display();
					break;
			case 4:insertat();
			        break;
		         case 5:delet();
			        break;
			case 6:deleteend();
			        break;
			case 7:deleteat();
			        break;        
			case 8:search();
			       break;
			case 9:exit(0);       
			
			default:printf("wrong input");
					
		  }
	  }
	  
  }
 














