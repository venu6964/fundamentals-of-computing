#include <stdio.h>
int main()
{
	int n,a=2;
	printf("/nenter a number:");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d",a);
		a=a+2;
	}
	return 0;
}
