#include<stdio.h>
int main()
{
	int average,sum=0,row,column;
	printf(".......____ENTER THE ROW AND SIZE BELOW____.......\n");
	printf("Enter The Row Size = ");
	scanf("%d",&row);
	printf("\n");
	printf("Enter The Column Size =");
	scanf("%d",&column);
	
    int x[row][column],i,j;
    int size;
    printf("......_____ENTER THE ARRAY ELEMENTS BELOW_____......\n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<column;j++)
    	{
    		printf("ROW AND COLUMN POSSITION x[%d][%d] =",i,j);
    		scanf("%d",&x[i][j]);
		}
	printf("\n");	
	
	}
	size= sizeof(x)/ sizeof(x[0]);
	
    for(i=0;i<row;i++)
    {
    	for(j=0;j<column;j++)
    	{
            sum =sum + x[i][j];
		}
	printf("\n");	
	}
	printf(" SUM OF 2D ARRAY ELEMENTS = %d",sum);
	average = sum/ size;
	printf("\n");
	printf(" AVERAGE OF 2D ARRAY ELEMENTS = %d ",average);
}