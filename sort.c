//sort elements of array using pointers

#include"header.h"
void main()
{
int a,i,j,n[5];
printf("\nenter the array elements\n");
for(i=0;i<5;i++)
scanf("%d",&n[i]);
printf("\n");
for(i=0;i<5;i++)
printf(" %d",n[i]);
printf("\n");
 sort(n);
}
void sort(int *p)
{
int i,j,n;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
   if(p[i]<p[j])
    {
     n=p[i];
     p[i]=p[j];
    p[j]=n;
    }
}
}

for(i=0;i<5;i++)
printf(" %d",p[i]);
}

