//binary/octal/hexdecimal to decimal conversion level 2 solution.
#include<stdio.h>
void bintodec();
void octtodec();
void hextodec();
int main(){
    int op;
    printf("\nType 1 for binary to decimal operation");
    printf("\nType 2 for octal to decimal operation");
    printf("\nType 3 for hexadecimal to decimal operation");
    printf("Enter your option:");
    scanf("%d",&op);
    if(op==1)
    bintodec();
    else if(op==2)
    octtodec();
    else if(op==3)
    hextodec();
    else
    printf("\n please enter a valid option!");
    return 0;
}
void bintodec(){
    int n,i,r,j,num=0;
    int a[32];
    printf("\nEnter the binary number:");
    scanf("%d",&n);
    i=0;
    while(n>0){
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    for(j=i-1;j>=0;j--){
        num=num*2+a[j];
    }
    printf("\nDecimalNumber is %d",num); 
    return;   
}
void octtodec(){
    int n,i,r,j,num=0;
    int a[32];
    printf("\nEnter the octal number:");
    scanf("%d",&n);
    i=0;
    while(n>0){
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    for(j=i-1;j>=0;j--){
        num=num*8+a[j];
    }
    printf("\nDecimal Number is %d",num); 
    return;   
}
void hextodec(){
    int i,r,j,num=0;
    int a[32];
    char n[100];
    printf("\nEnter the hexadecimal number :");
    scanf("%s",&n);
    i=0;
    while(n[i]!='\0'){
        if(n[i]>='A'&&n[i]<='F'){
            a[i]=n[i]-55;
        }
        if(n[i]>='1'&&n[i]<='9'){
            a[i]=n[i]-48;
        }
        i++;
    }
    for(j=0;j<i;j++){
        num=num*16+a[j];
    }
    printf("\nDecimal Number is %d",num);
    return;    
}
