//program 4 solution
#include<stdio.h>
int main ()
{
  int operand1, operand2;
  int result;
  char operator;
  printf ("Enter first number = ");
  scanf ("%d", &operand1);
  printf ("Choose operator to perform operations = ");
  scanf (" %c", operator);
  printf ("Enter second number = ");
  scanf ("%d", &operand2);
  result = 0;
  switch(operator)
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
      printf ("\nInvalid operation operator ");
      break;
    }
  printf ("\nResult: %d %c %d = %d\n", operand1, operator, operand2, result);
  return 0;
}

