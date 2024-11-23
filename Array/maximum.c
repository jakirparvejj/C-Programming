// Write a program that sum and average of an Array?

#include <stdio.h>
#include <math.h>
int main ()
{
  int a[6] ;
  int i;
  int min;


printf("Enter 6 Number:");
  for (i=0;i<6;i++){
  scanf("%d",&a[i]);
  
  }

 min = a[0];

  for (i=1;i<6;i++)
  {
      if (min>a[i])
      {
          min = a[i];
      }
  }

  printf("Min Number is : %d \n",min);

    getch();
}
