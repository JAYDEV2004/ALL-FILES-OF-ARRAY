#include<stdio.h>
int main()
{
//	int row,column;
//	
//	printf(".....ENTER THE ROW SIZE.....\n");
//	scanf("%d",&row);
//	printf("\n.....ENTER THE COLUMN SIZE.....\n");
//	scanf("%d",&column);
//	
//	int a[row][column];
//	
    int a[5][6];  
	int row,column;
	row= sizeof (a)/ sizeof (a[0]);
    column = sizeof (a[0])/ sizeof(a[0][0]);
    
    printf("row size = %d\n",row);
    printf("column size = %d",column);
 
}