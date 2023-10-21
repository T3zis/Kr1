#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

void random2(void)
{
  int  x_random = 0, y_random = 0;
  double b = 0.0,  x_random1 = 0.0, y_random1 = 0.0;

  srand(time(NULL));
  
  x_random = rand()%100000;

  y_random = rand()%100000;

 
  x_random1 = x_random * 0.1;

  y_random1 = y_random * 0.1;

  printf("x = %f", x_random1);
  puts("\n");
  
  printf("y = %f", y_random1);
  puts("\n");

  if ((x_random1 / y_random1) > 0){
    b = log(x_random1 / y_random1) + pow((x_random1 * x_random1 + y_random1), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }
  
  if ((x_random1 / y_random1) < 0){
    b = log(fabs(x_random1 / y_random1)) + pow((x_random1 * x_random1 + y_random1), 3);
    puts("Ответ:");        
    printf("%f", b);
    puts("\n");
  }
  
  if (x_random1 == 0 && y_random1 != 0){
    b = pow((x_random1 * x_random1 + y_random1), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }

}