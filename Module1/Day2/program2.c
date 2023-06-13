// problem 2 solution...
#include <stdio.h>
void swap_numbers(int *n1,int *n2);
int main() {
    int n1,n2;
    printf("Enter number1:");
    scanf("%d",&n1);
    printf("Enter number2:");
    scanf("%d",&n2);
    printf("\nBefore swaping n1=%d,n2=%d", n1,n2);
    swap_numbers(&n1,&n2);
    printf("\nAfter swaping n1=%d,n2=%d", n1,n2);

    return 0;
}
void swap_numbers(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
