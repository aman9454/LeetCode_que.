#include<stdio.h>
int main(){
	int i,j,k,a[3][3],b[3][2],c[3][2]
	printf("enter the matrix a");
	for (int i = 0; i < 3; i++);
	{
	   for (int j = 0; j < 3; j++)
	   	scanf("%d", &a[i][j]);
	}
	printf("Print b");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
	   	scanf("%d", &b[i][j]);
	}
  for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
	   {
  c[i][j]=0;
   for (int k = 0; k < 3; k++)
   {
   	c[i][j]= c[i][j]+a[i][k]*b[k][j];
   	printf("%d\n",c[i][j] );
   }
   printf("\n");
}
