//program 2  level 1 solution
#include<stdio.h>
int main(){
    int n,x,b;
    printf("\nEnter number:");
    scanf("%d",&n);
    printf("\nNumber is %d",n);
    printf("\nEnter no.of bits which you want to represent number %d :",n);
    scanf("%d",&b);
    printf("\n %d Bit representation  of given  number %d:\n",b,n);
    for(int i=b-1;i>=0;i--){
        x = n & (1 << i);
        if(x==0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
}