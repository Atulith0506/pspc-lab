#include<stdio.h>
int main()
{
	int i,j,n,a[100],temp;
	printf("enter no of array values\n");
	scanf("%d",&n);
	printf("enter %d elements to array\n",n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+i])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the selected array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
