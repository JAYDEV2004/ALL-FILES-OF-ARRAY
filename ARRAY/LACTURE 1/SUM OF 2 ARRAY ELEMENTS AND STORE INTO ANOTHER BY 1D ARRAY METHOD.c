#include<stdio.h>
int main()
{
	int n;
	
	printf("ENTER THE ARRAY SIZE = ");
	scanf("%d",&n);
	
	int a[n],b[n],addition[n],i;
	
	printf("ENTER THE FIRST ARRAY ELEMENT\n\n");
	for(i=0;i<n;i++)
	{
		printf("INDEX NUMBER OF a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("ENTER THE SECOND ARRAY ELEMENT\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("INDEX NUMBER OF b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("SUM OF BOTH ARRAY ELEMENTS \n\n");
	for(i=0;i<n;i++)
	{
		addition[i] = a[i] + b[i]; 
		printf("%d",addition[i]);
	}
}