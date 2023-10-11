#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,a[100],pos,item,ch;
 	printf("enter array size\t");
 	scanf("%d",&n);
 	printf("enter array elemnte\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 		
 		
	 }
	 	printf(" array elemnte are\n");
	 	for(i=0;i<n;i++)
 	{
 		printf(" %d\n",a[i]);
 		
 		
	 }
	 while(1)
	 {
	 	printf("\n Enter your choice\n1.insert\n2.delete\n3.display\n4.exit\n");
	 	scanf("%d",&ch);
	 	
	 	switch(ch)
	 	{
	 		case 1:	printf(" position to be inserted\t ");
	 	     		printf(" elemt to be inserted\n");
				 		scanf("%d%d",&pos,&item);
				 		n++;
				 		for(i=n;i>pos-1;i--)
				 		{
				 			a[i]=a[i-1];
						 }
						 a[i]=item;
						 break;
						 
			case 2: 	printf(" position to be deleted\t ");
				 		scanf("%d",&pos);
				 		if(pos<n)
				 		{
				 			
						 
				 		for(i=pos;i<=n;i++)
				 		{
				 			a[i]=a[i+1];
						 }
						 n--;
					}
					else
					{
						printf("wrong position");
					}
						 	
						 
						 break;
			case 3:	 printf(" new array\n ");
					 	for(i=0;i<n;i++)
						 	{
						 		printf(" %d",a[i]);
						 	}
						 	break;
			 case 4:
			          exit(0);
					  
					  default:printf("wrong choice");           			 	 
	 }
	 
}
	 
	 
		
 	getch();
 		
	 
 }
