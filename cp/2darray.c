#include<stdio.h>
int main(){
	int i,j,k,a,b,c,d,a[3][3],b[3][2],c[3][2]
	printf("enter the matrix a");
	scanf("%d %d", &a,&b);
	printf("Enter the first Matrix :\n");
	for (int i = 0; i < 3; i++)
	{
		for ( j = 0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix b \n");
	scanf("%d %d", &c,&d);
	printf("Enter the second Matrix :\n");
	for ( i = 0; i < 3;i++)
	{
		for ( j = 0; j<2;j++)
			{
				scanf("%d",&b[i][j]);
			}
	}
	printf("First matrix is :\n");

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++i)
		{
			/* code */printf("%d\n",a[i][j] );
		}
		printf("\n");
	}
	printf("second Matrix :\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++i)
		{
			/* code */printf("%d\n",a[i][j] );
		}
		printf("\n");
	}