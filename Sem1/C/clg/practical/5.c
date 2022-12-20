#include<stdio.h>
void main()
{
  printf("Krishant Chauhan MCA A 29\n");
	int a,a1,sum=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Value:\n ");
	int n=printf("%d",a);
	a1=a;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=a1%10;
		a1/=10;
	}
	printf(" = ");
	for(int i=0,j=n-1;i<=n/2;i++,j--)
	{
		if(i<j)
		{
		printf("(%d + %d) + ",arr[i],arr[j]);
		sum=sum+arr[i]+arr[j];
		}
		if(i==j)
		{
			printf("%d =",arr[i]);
			sum=sum+arr[i];
		}
}
	printf(":%d\t",sum);
}
