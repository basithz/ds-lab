#include<stdio.h>
int front=-1,rear=-1,CQ[20],max,item,i;
void enquee()
{
int temp=rear;
rear=(rear+1)%max;
if(front==rear)
 {
   rear=temp;
   printf("Queue Overflow");
 }
else if(front==-1)
{
front=0;
rear=0;
printf("Insert Value:");
scanf("%d",&item);
CQ[rear]=item;
}
else
{
printf("Insert Value:");
scanf("%d",&item);
CQ[rear]=item;
}
}

void dequee()
{
if(front==-1)
 printf("Queue Underflow");
else if(front==rear)
{
printf("Element %d deleted",CQ[front]);
front=-1;
rear=-1;
}
else
{
printf("Element %d deleted",CQ[front]);
front=(front+1)%max;
}
}

void display()
{
if(front==-1)
  printf("Queue is Empty");
else
{
  printf("Queue Elements are:");
   for(i=front;i!=rear;i=((i+1)%max))
    {
    printf("%d ",CQ[i]);
     }
    printf("%d ",CQ[i]);
 }
}
void search()
    {
        int item,p=1,i,c=1;
        printf("Enter element to search:");
        scanf("%d",&item);
        if(front==-1)
                printf("Queue is empty");
        else
            {
                for(i=front;i!=rear;i=(i+1)%(max))
                {
                    if(CQ[i]==item)
                    {
                    c=0;
                         printf("Element found at position %d",p);
                         }
                    p++;
                }
                  if(CQ[i]==item)
                  {
                     printf("Element found at position %d",p);
                 c=0; 
            }
            if(c==1)
                     printf("Element not found"); 
    }
    }
    int main()
    {
        int ch;
        printf("Enter the size: ");
        scanf("%d",&max);
        do{
            printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Display\n5.Exit\nEnter your choice: ");
            scanf("%d",&ch);
            switch(ch)
                {
                    case 1:enquee();
                           break;
                    case 2:dequee();
                           break;
                    case 3:search();
                           break;
                    case 4:display();
                           break;
                    case 5:printf("Exiting");
                           break;
                    default:printf("\nPlease enter valid choice\n");
               }
        
          }while(ch!=5);
          return 0;

    }
