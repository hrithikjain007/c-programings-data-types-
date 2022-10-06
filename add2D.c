//sum of 2d array


#include"header.h"
void main()
{
	int a[2][3],b[2][3],i,j,l;
	printf("\nenter the number for array 1\n");
	for(i=0;i<2;i++)
          {
		for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);

	}
          }

	printf("\nenter the number for array 2\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
          }
        
printf("\nenter the number for array 1\n");
 for(i=0;i<2;i++)
{
   for(j=0;j<3;j++)
     {
      printf(" %d ",a[i][j]);
      


}
printf("\n");

}

 for(i=0;i<2;i++)
{
   for(j=0;j<3;j++)
     {
      printf(" %d ",b[i][j]);
      }
printf("\n");
}



	add(a,b);

}
void add(int (*p)[3],int (*q)[3])
{
	int c[2][3],j,i;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=p[i][j]+q[i][j];
		}
	} 
  
 for(i=0;i<2;i++)
{
   for(j=0;j<3;j++)
     {
      printf(" %d ",c[i][j]);
      


}
printf("\n");
}
}
