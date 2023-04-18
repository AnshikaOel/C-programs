// FINDING OUT THE DAY ON A GIVEN DATE WHEN A DAY ON APARTICULAR DATE IS GIVEN
#include <stdio.h>

int main ()
{

  int n;
  printf
    ("enter any date of the month to check on which day the date will lie :");
  scanf ("%d", &n);

  int day = n % 7;
  if(n<=31)
  {
  switch (day)
    {
    case 1:
      printf ("thursday");
      break;
    case 2:
      printf ("friday");
      break;
    case 3:
      printf ("saturday");
      break;
    case 4:
      printf ("sunday");
      break;
    case 5:
      printf ("monday");
      break;
    case 6:
      printf ("tuesday");
      break;
    case 0:
      printf ("wednesday");
      break;
  
   } }
   else
   printf("enter a valid date between 1 to 31 ");

  return 0;
}

