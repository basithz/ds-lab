#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[200],c[100],n,i,k,j,m;
	printf("enter the size of fist array");
	scanf("%d",&n);
	printf("enter the elemt of fist array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
		printf("esend array");
		for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
		
	printf("enter the size of send array");
	scanf("%d",&m);
	printf("enter the elemt of scond array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<m;i++)
	{
		printf("  %d",b[i]);
	}
	j=n+m;
		for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
		for(k=0;k<j;k++)
	{
	
	c[i]=b[k];	
	i++;
	}
	printf("merged array :\n");
		for(i=0;i<j;i++)
	{
	
	printf(" %d",c[i]);
	}
	
	
	
}
