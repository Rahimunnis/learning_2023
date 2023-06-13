//program 4 solution
#include<stdio.h>
int main ()
{
  int operand1, operand2;
  float result;
  char ch;
  printf ("Enter first number = ");
  scanf ("%d", &operand1);
  printf ("Enter second number = ");
  scanf ("%d", &operand2);
  printf ("Choose operator to perform operations = ");
  scanf (" %c", &ch);
  result = 0;
  switch (ch)
    {
    case '+':
      result = operand1 + operand2;
      break;
    case '-':
      result = operand1 - operand2;
      break;
    case '*':
      result = operand1 * operand2;
      break;
    case '/':
      result = operand1 / operand2;
      break;
    default:
      printf ("Invalid operation\n");
    }
  printf ("Result: %d %c %d = %f\n", operand1, ch, operand2, result);
  return 0;
}

