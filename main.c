#include <stdio.h>
int main()
{
  char name [100];
  int b;
  float c;
  printf("Enter your name :");
  scanf("%s",name);
  printf("Enter your age:");
  scanf("%d",&b);
  printf("Enter your height (in cm):");
  scanf("%f",&c);
  printf("\t\t\t\tPERSONAL DETAILS");
  printf("\nYour name is: %s\n",name);
  printf("\nYour age is: %d\n",b);
  printf("\nYour height (in cm) is : %f\n",c);
  return 0;
}

    
