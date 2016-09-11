#include <stdio.h>

int myStrlen(char* c)
{
   int i;
   for (i = 0; c[i] != '\0'; ++i);
   return i;
}

int main()
{
	int t;
	scanf("%d",&t);
	char a[10];
	scanf("%s",a);
	printf("%d",myStrlen(a));
	return 0;
}