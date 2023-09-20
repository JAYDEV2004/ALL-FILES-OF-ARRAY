#include<stdio.h>
int main()
{
	int n,a[50],i;
	printf("ENTER ARRAY SIZE = ");
	scanf("%d",&n);
	
	printf("\n________ARRAY_ELEMENT________\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}