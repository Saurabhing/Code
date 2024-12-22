// 3, 5, 9, 15, 23, 33, 45
#include<stdio.h>
int main()
{
	int n,m=3;
	printf("Enter the vale\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		m = m + 2*i;	
	}
	printf("%d",m);
	return 0;
}
