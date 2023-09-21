#include<stdio.h>
int main()
{
	int n,n1,n2;
	
	printf("ENTER THE FIRST ARRAY SIZE = ");
	scanf("%d",&n);
	
	printf("ENTER THE SECOND ARRAY SIZE = ");
	scanf("%d",&n1);
	
	int a[n],b[n1],merge[10000],i;
	printf("\n\n............ENTER THE 1ST ARRAY ELEMENT..........\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("INDEX NUMBER OF a[%d]",i);
		scanf("%d",&a[i]);
		merge[i]= a[i];
		n2=i;
		n2++;
	}
	printf("\n\n............ENTER THE 2ND ARRAY ELEMENT..........\n\n");
	
	for(i=0;i<n1;i++)
	{
		printf("INDEX NUMBER OF b[%d]",i);
		scanf("%d",&b[i]);
		merge[n2] = b[i];
		
		n2++;
	}
	
	printf("\n\n............MERGE OF BOTH ARRAY ELEMENTS...........\n\n");
     for(i=0;i<n+n1;i++)
     {
     	printf(" a[%d] = %d\n\n",i,merge[i]);
	 }

}