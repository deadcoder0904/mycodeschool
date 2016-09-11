#include <stdio.h>

void myStrCpy(char *src,char *dest){
	int i=0;
	while(src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
}

int main()
{
	char a[10],b[10];
	scanf("%s",a);
	myStrCpy(a,b);
	printf("%s\n",b);
	return 0;
}