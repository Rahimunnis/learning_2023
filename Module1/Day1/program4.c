//program 4 level 1 solution
#include<stdio.h>
void operation_perform();
int main(){
  int i;
  while(1){
    printf("\n Do you want Next operation to be perform! if yes type 1, else type 0 :");
    scanf("%d", &i);
    if(i==1){
      operation_perform();
    }
    else if(i==0){
      break;
    }
    else{
      printf("\n Enter valid number yes-1,no-0");
    }
  }
  return 0;
}
void operation_perform(){
  int op1,op2;
  int ch;
  printf("\nEnter operand1:");
  scanf("%d", &op1);
  printf("\n Enter 1 for + ,2 for - ,3 for * ,4 for / ,5 for %% ");
  printf("\nEnter operator:");
  scanf("%d", &ch);
  printf("Enter operand2:");
  scanf("%d", &op2);
  switch(ch)
    {
      case 1:
        printf("add of op1&op2 is %d", op1 + op2);
        break;
      case 2:
        printf("sub of op1&op2 is %d", op1 - op2);
        break;  
      case 3:
        printf("mul of op1&op2 is %d", op1 * op2);
        break;
      case 4:
        printf("div of op1&op2 is %f", (float) op1 / op2);
        break;
      case 5:
        printf("rem of op1&op2 is %d", op1 % op2);
        break;
      default:
        printf("invalid");
        break;
    }
  return;
    
}