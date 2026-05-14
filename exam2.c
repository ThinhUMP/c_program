#include <stdio.h>
#include <string.h>

/* 
Write a program that prints a monthly calendar. The program reads through the standard input
the number of days in the month and the day of the week at which the month begins (1=Sunday, 7=Saturday).
Execution example:
$./a.out
number of days in month : 31
starting day of the week : 3
sun   mon  tue  wed  thu  fri  sat
             1    2    3    4    5
   6    7    8    9   10   11   12
  13   14   15   16   17   18   19
  20   21   22   23   24   25   26
  27   28   29   31   31
$ 
*/

int main(){
  int days;
  printf("number of days in month : ");
  scanf("%d", &days);

  int start;
  printf("starting day of the week : ");
  scanf("%d", &start);

  printf("sun  mon  tue  wed  thu  fri  sat\n");
  for (int i=1; i<days+1; i++){
    if (i==1){
      for (int j=1; j<(3+5*(start-1)); j++)
        printf(" ");
      printf("%d\n", i);
    }
  }
}

/* int main()
{
    int k, rmd;

    printf(" Su Mo Tu We Th Fr Sa\n");

    for(k = 1; k < 32; ++k) {
         if(k == 1){
             printf("                   %4d\n", k); 
         }
         else if(k % 7 == 1) {
             printf(" %2d\n", k);
         }
         else {
             printf(" %2d", k);
         }
    }
    return 0;
} */

