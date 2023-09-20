#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50,60,70,8,9,10,15,18,25};
	
	int size,i,sum=0,average=0;
	
	size = sizeof(a)/sizeof(0);
	
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
		average  =  sum/size;
	}
	printf("AVERAGE OF ARRAY = %d",average);
}