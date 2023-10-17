#include <stdio.h>
#include <stdlib.h>

int main()
{

char grade = 'C';
switch(grade){
  case 'A':
      printf("great");
      break;

       case 'B':
      printf("alright");
      break;
       case 'C':
      printf("poorly");
      break;
       case 'D':
      printf("bad");
      break;
       case 'F':
      printf("failed");
      break;
       default:
        printf("invalid");
}

   return 0;


}
