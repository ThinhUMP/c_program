#include <stdio.h>
#include <string.h>

/* 
Write a program that reads a word from the command line and prints it horizontally and vertically so that
the two obtained words intersect in the middle. 
The horizontal word must be printed in reverse order.
See the execution examples below. 
Assume that the typed word's length is odd.

$ ./a.out MANDARINO
    M
    A
    N
    D
ONIRADNAM
    R
    I
    N
    O

$ ./a.out bigne
  b
  i
engib
  n
  e 

*/

int main(int argc, char *argv[]){
  char word[100]="";
  strcat(word, argv[1]);
  int len=sizeof(word)/sizeof(word[1]);
  printf("len of word %d", len);
  for (int i=0; i<len; i++){
    /* for (int j=0; j<len/2; j++){
      printf(" ");
    } */
    printf("%c\n", word[i]);
  }

  printf("%s\n", word);
  return 0;
}
