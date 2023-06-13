//program 1 level 1 solution
#include <stdio.h>
void printbignum1(int a,int b);
void printbignum2(int a,int b);
int main() {
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    //using if elseif..statement
    printbignum1(a,b);
    //using ternary operator 
    printbignum2(a,b);
    

    return 0;
}
void printbignum1(int a,int b){
    printf("\n Using if elseif block!");
    if(a>b){
        printf("\na is big where a=%d,b=%d",a,b);
    }
    else{
        printf("\nb is big where b=%d,a=%d",b,a);
    }
}
void printbignum2(int a,int b){
    printf("\nUsing ternary operator! ");
    printf("\na value is %d",a);
    printf("\nb value is %d",b);
    printf("\nBiggest value is %d",(a>b)?a:b);
}
