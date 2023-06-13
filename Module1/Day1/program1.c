#include <stdio.h>
void printbignum(int a,int b);
int main() {
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printbignum(a,b);
    

    return 0;
}
void printbignum(int a,int b){
    if(a>b){
        printf("a is big where a=%d,b=%d",a,b);
    }
    else{
        printf("b is big where b=%d,a=%d",b,a);
    }
}
