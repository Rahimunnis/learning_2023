//dec to binary/octal/hex level 2 solution
#include<stdio.h>
void dectobin(int n);
void octtobin(int n);
void hextobin(int n);
int main(){
    int n,o;
    printf("\nEnter decimal number:");
    scanf("%d",&n);
    printf("\nType 1 for decimal to binary conversion ");
    printf("\nType 2 for decimal to octal conversion ");
    printf("\nType 3 for decimal to hexadecimal conversion ");
    printf("\nEnter your choice:");
    scanf("%d",&o);
    if(o==1)
    dectobin(n);
    else if(o==2)
    octtobin(n);
    else if(o==3)
    hextobin(n);
    else
    printf("Enter valid option");
    return 0;
}
void dectobin(int n){
    int r;
    int a[32];
    int i=0,j;
    while(n>0){
        r=n%2;
        a[i]=r;
        n=n/2;
        i++;
    }
    printf("\nbinary format of given decimal value:");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}
void octtobin(int n){
    int r;
    int a[32];
    int i=0,j;
    while(n>0){
        r=n%8;
        a[i]=r;
        n=n/8;
        i++;
    }
    printf("\nOctal format of given decimal value:");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }

}
void hextobin(int n){
    int r;
    char a[32];
    int i=0,j;
    while(n>0){
        r=n%16;
        if(r<10){
            a[i]=r+48;
        }
        else{
            a[i]=r+55;
        }
        n=n/16;
        i++;
    }
    printf("\nHexadecimal format of given decimal value:");
    for(j=i-1;j>=0;j--){
        printf("%c",a[j]);
    }

}
