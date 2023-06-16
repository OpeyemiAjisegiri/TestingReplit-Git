/* Testing a git repositories idea */
/* Copied from first program in C  */
#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  printf("My name is Opeyemi Ajisegiri");
  printf("This is my first program in C language\n");
  
  /*Testing Out Some Ideas*/
  int testNum = 10;
  printf("The testing number is: %d\n\n", testNum);

  int numA, numB; 
  printf("Please enter a number:\t");
  scanf("%d", &numA);
  printf("Please enter a number:\t");
  scanf("%d", &numB);
  printf("The addition of the two numbers you entered is: %d\n",(numA + numB));
  printf("The multiplication of the two numbers you entered is: %d\n",(numA * numB));
  printf("The division of the two numbers you entered is: %d\n",(numA / numB));

  return 0;
}