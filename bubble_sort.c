#include<stdio.h>
int main(){
	int a[100],i,j,n,temp;
	printf("enter the element of the matrix ");
	scanf("%d",&n);
	printf("Enter the element \n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j]>a[j+1])
		
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}}
printf("List sort in Ascending order \n");
for (int i = 0; i < n; i++)
{
	printf("%d\n", a[i] );
}
{
	printf("\n" );
}
return 0;
}