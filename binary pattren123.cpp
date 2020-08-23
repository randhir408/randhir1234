#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	printf("Enter how many line=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
	getch();
}
