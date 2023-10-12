#include<stdio.h>
#include<stdlib.h>

void insert();
//void delet();
//void search();
void display();
int cq[100],rear=-1,front=-1,n;
int main()
{
int ch;

printf("enter size cqueue");
scanf("%d",&n);
while(1)
{
	printf("\ninsert your  choice\n1.insert\n2.delete\n3.search\n4.display\n5.exit\n");
	scanf("%d",&ch);
switch(ch)
{
	case 1:insert();
		break;
	//case 2:delet();
	       break;
	//case 3:search();
		break;
	case 4:display();
	       break;
	case 5:exit(0);
	default:printf("wrong choice");
	}
  }
 
 return 0;
}
void insert()
{
int data,i;

/*printf("enter data ");
for(i=0;i<n;i++)
{
 scanf("%d",&cq[i]);
}
printf("entered  data are=\n");
{*/
if((rear+1)%(n)==front)
{
 printf("over flow occurer");
  
 }
 else if(rear==-1 &&front==-1)
 {
 front=0;
 rear=rear+1;
 printf("enter data cqueue");
 scanf("%d",&data);
 cq[rear]=data;
 }
 else if(front!=0&&rear==n-1)
 {
 printf("enter item cqueue");
 scanf("%d",&data);
 rear=(rear=+1)%(n);
 cq[rear]=data;
 }
 else if(front==rear)
 {
 rear=rear+1;
 printf("enter item cqueue");
 scanf("%d",&data);
 cq[rear]=data;
 }
 else
 {
 rear=rear+1;
 printf("enter item cqueue");
 scanf("%d",&data);
 cq[rear]=data;
 }
 }
void display()
{
int i; 
printf(" item cqueue:\n");
if(front==-1)
{
printf("emty");
}

for(i=front;i!=rear;(i+1)%n);
{
printf("%d\n",cq[i]);
}
printf("%d\n",cq[i]);
}
//void delete()
//{



 
 

 
 





        
