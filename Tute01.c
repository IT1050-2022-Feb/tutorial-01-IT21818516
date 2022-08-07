/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark = 0,total = 0,i;
  float avg;
  //Taking input and calculating total
  for(i=0; i<2; i++)
    {
      printf("Enter the mark %d: ", i+1);
      scanf("%d", &mark);

      total = total + mark;
    }
  //Finding average and final output

  printf("Total = %d\nAverage = %.2f", total, avg = total /i);
  
  return 0;
}

