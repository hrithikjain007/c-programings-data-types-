//copy elements of array using pointers


#include "header.h"
void main()
{
int a[5],i;
printf("\nenter the numbers\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
printf("%d ",a[i]);
copy(a);
}
void copy(int *p)
{
int b[5],i;
for(i=0;i<5;i++)
{
b[i]=*(p+i);
printf("\n%d ",b[i]);
}
}
