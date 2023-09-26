#include<stdio.h>
int main()
{
	int x[5][5]= {{05,10,15,20,25},{30,35,40,45,50},{55,60,65,70,75},{80,85,90,95,100},{105,110,115,120,125}};
	
	int i,j,sum=0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i>0 && i<4 && j<4 && j>0)
			{
				sum+=x[i][j];
			}
		}
		printf("\n");
	}
	printf("THE SUM OF ALL INNER ELEMENTS = %d",sum);
	
	return 0;
}