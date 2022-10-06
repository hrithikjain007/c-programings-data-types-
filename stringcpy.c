//copy one string to another and also find the length of string


#include "header.h"
void main()
{
	int i=0,l,j=0;
	char s[30],a[30];
	printf("\nenter new string\n");
	scanf("%s",s);
	printf("\nenter second string\n");
	scanf("%s",a);
	while(s[i])
		i++;
	j=0;
	while(a[j])
	{
		s[i]=a[j];
		j++;
		i++;
	}
	s[i]=a[j];
	printf("\n%s",s);
	l=stl(s);
	printf("\nlength of string is=%d\n",l);
}
int stl(char *p)
{
	int c=0;
	while(*p)
	{

		c++;
		p++;
	}
	return c;
}
