#include<stdio.h>

main()

{   
    int r,c,s;

	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=2;r<=5;r++)
	{
		for(s=r;s>1;s--)
		{
			printf(" ");
		}
		for(c=r;c<=5;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
