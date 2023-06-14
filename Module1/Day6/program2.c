//complex numbers using structures..
#include<stdio.h>
typedef struct complex{
    int real;
    int imag;
}com;
void readcomplex();
void printcomplex(com c1);
void addcomplex(com c1,com c2);
void mulcomplex(com c1,com c2);
int main(){
    readcomplex();
    return 0;
}
void readcomplex(){
    com c1,c2;
    printf("\n Enter complex number 1");
    printf("\nEnter real part:");
    scanf("%d",&c1.real);
    printf("\nEnter imaginary part:");
    scanf("%d",&c1.imag);
    printf("\n Enter complex number 2");
    printf("\nEnter real part:");
    scanf("%d",&c2.real);
    printf("\nEnter imaginary part:");
    scanf("%d",&c2.imag);
    printf("\ncomplex number 1");
    printcomplex(c1);
    printf("\ncomplex number 2");
    printcomplex(c2);
    addcomplex(c1,c2);
    mulcomplex(c1,c2);
    return;
}
void printcomplex(com c){
    printf("\n complex number is (%d)+i(%d)",c.real,c.imag);
    return;
    
}
void addcomplex(com c1,com c2){
    com add;
    add.real=c1.real+c2.real;
    add.imag=c1.imag+c2.imag;
    printf("\naddition of two complex number is %d + i %d",add.real,add.imag);
    return;
}
void mulcomplex(com c1,com c2){
    com mul;
    mul.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    mul.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
    printf("\nmultiplication of two complex number is %d + i %d",mul.real,mul.imag);
    return;
}