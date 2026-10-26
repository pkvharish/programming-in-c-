
#include <stdio.h>
int main()
{
   int a[2][2],b[2][2],c[2][2],i,j;
   for (i=0;i<2;i++)
   {
       for (j=0;j<2;j++)
       {
           printf("\nEnter the value :");
           scanf("%d",&a[i][j]);
       }
   }
    for (i=0;i<2;i++)
   {
       for (j=0;j<2;j++)
       {
           printf("\nEnter the value :");
           scanf("%d",&b[i][j]);
       }
   }
    for (i=0;i<2;i++)
   {
       for (j=0;j<2;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
           
       }
   }
   for (i=0;i<2;i++)
   {
       printf("\n");
       for (j=0;j<2;j++)
       {
           printf("\t%d",c[i][j]);

       }
   }
   printf("\n Transpose");
   for (i=0;i<2;i++)
   {
        printf("\n");
       for(j=0;j<2;j++)
       {
          
           printf("\t%d",c[j][i]);

       }
   }
return 0;
}
